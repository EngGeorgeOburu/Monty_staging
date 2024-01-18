#include "monty.h"
/**
* add - adds the two top elements of the stack
* @head: pointer to a pointer to the head ofthe stack
* @line_number: Line number of the opcode in the Monty byte code file
*/
void add(stack_t **head, unsigned int line_number)
{
	int a, b;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: Can't add, stack too short",line_number);
		free(*head);
		exit(EXIT_FAILURE);
	}
	/* Retrieves and store the top two elements of the stack */
	a = (*head)->n;
	b = (*head)->next->n;
	/* Move the head to the next node and frees the prev one */
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;

	(*head)->n = a + b;
}
