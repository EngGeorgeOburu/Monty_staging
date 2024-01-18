#include "monty.h"
/**
* push - Pushes the the element to the stact
* @head: top element/head of the stack
* @element: Value of element to be pushed
*/
void push(stack_t **head, int element)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	
	if (new_node == NULL)
	{
		fprintf(stderr, " Error memeory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = element;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
}
