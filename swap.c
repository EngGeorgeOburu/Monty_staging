#include "monty.h"
/**
* swap - swaps the top element of the stack
* @head: head of stack
* @line_number: line number in the file
* Return: Nothing
*/
void swap (stack_t **head, unsigned int line_number)
{
	int tmp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: Can't swap, stack too short\n", line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}
	tmp = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = tmp;
}
