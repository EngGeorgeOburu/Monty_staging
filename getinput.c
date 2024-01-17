#include "monty.h"

/**
 * get_inputs - read user inputs from stdin and parse lines
 * @fd: file descriptor to read cmds from, if any
 * @stack: head ptr to stack
 * Return: execution status
 */
int get_inputs(FILE *stream, stack_t **stack)
{
	size_t size = 0, hasred = 0;
	ssize_t nread;
	char *buffer = NULL, **toks;
	unsigned int line_number = 1;

	do {
		nread = getline(&buffer, &size, stream);
		if (nread >= 0)
		{
			hasred = 1;
			toks = _strtok(buffer, nread + 1, " \n\t");
			if (toks && *toks)
			{
				runcmd(toks, line_number, stack);
				free_toks(toks);
				if (status != 0)
				{
					break;
				}
			}
			line_number++;
		}
		else if(nread < 0 && !hasred)
		{
			//free(buffer);
			exiterr(stack, line_number, "Failed to read instrucation");
		}
	} while (nread != -1);
	free(buffer);

	return (status);
}
