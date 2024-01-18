#include "monty.h"

/**
 * push - push a new elt into the stack
 * @stack: ptr to ptr to the head of stack
 * @line_number: where this function is beeing called
 * Return: nothing
 */
void push(stack_t **stack, char **cmd, unsigned int line_number, int is_stack)
{
	if (cmd[1] && !cmd[2])
	{
		if (is_stack == 0)
			add_node_head(stack, atoi(cmd[1]));
		else
			add_node_end(stack, atoi(cmd[1]));
	}
	else
	{
		exiterr(stack, line_number, "usage: push integer");
	}
}

/**
 * pop - pop elt in head of statck
 * @stack: ptr to ptr to the head of stack
 * @line_number: where this function is beeing called
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	delete_node_head(stack);
	if (0 > status)
	{
		exiterr(stack, line_number, "can't pop an empty stack");
	}
}

/**
 * print_stack - print the content of the stack
 * @stack: ptr to ptr to the head of stack
 * @line_number: where this function is beeing called
 * Return: nothing
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
	print_list(*stack);
}

/**
 * print_head - print elt in head of statck
 * @stack: ptr to ptr to the head of stack
 * @line_number: where this function is beeing called
 * Return: nothing
 */
void print_head(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		exiterr(stack, line_number, "can't pint, stack empty");
	}
	printf("%d\n", (*stack)->n);
}
