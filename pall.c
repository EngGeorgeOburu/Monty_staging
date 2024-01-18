#include "monty.h"
/**
* printStack - Shows all the values on the stack
* @top_element: Stack head
* Return: Nothing
*/
void printStack(stack_t **top_element)
{
	stack_t *h;
	
	h = *top_element;
	if (h == NULL)
	{
		return;
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
