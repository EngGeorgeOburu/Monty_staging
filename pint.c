#include "monty.h"
/**
* pint - Prints the value at the top of the stack
* @head: pointer to a pointer to the head of the stack
* @line_number Current line in the monty file
*/
void pint(stack_t **head, unsigned int line_number)
{
	stack_t *h = *head;
	
	if (h == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	}
	printf("%d\n", h->n);
}
