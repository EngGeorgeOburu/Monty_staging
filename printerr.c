#include "monty.h"

/**
 * printerr - print error message to stderr
 * @msg: error message to be printed
 * @status: error status code
 * Return: status code of the err
 */
int printerr(const char *msg, int status)
{
	dprintf(STDERR_FILENO, "%s", msg);

	return (status);
}

/**
 * exiterr - print err msg, free mem and exit
 * @stack: stack to be freed
 * @line_number - number of the line where the err occured
 * msg: error msg to print
 * Return: Nothing
 */
void exiterr(stack_t **stack, unsigned int line_number, const char *msg)
{
	//free_stack(*stack);
	dprintf(STDERR_FILENO, "L%u: %s\n", line_number, msg);
	//fclose(stream);
	//exit(EXIT_FAILURE);
	status = 1;
}
