#include "monty.h"

int status;
/**
 * main - entry point of the monty interpretor
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	status = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		printerr("USAGE: monty file\n", 1);
		exit(EXIT_FAILURE);
	}
	execcmd(argv[1], &stack);
	free_stack(stack);

	return (status);
}
