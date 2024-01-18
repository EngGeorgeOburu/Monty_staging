#include "monty.h"
/**
* pop - Removes the top element from the stack
* @head: pointer to a pointer to the head of the stack
* @line_number: Crurrent line number in the Monty file.
*/
void pop (stack_t **head, unsigned int line_number)
{
	stack_t *h = *head;
	
	if (h == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*head = h->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(h);
}
