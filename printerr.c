#include "monty.h"

/**
 * printerr - print error message to stderr
 * @msg: error message to be printed
 * @status: error status code
 * Return: status code of the err
 */
int printerr(unsigned int line_number, const char *msg)
{
	dprintf(STDERR_FILENO, "L%u: %s\n", line_number, msg);
	status = 1;
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
	dprintf(STDERR_FILENO, "L%u: %s\n", line_number, msg);
	status = 1;
}
