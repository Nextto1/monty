#include "monty.h"
/**
* free_stack - the doubly linked list is
* what it freezes
* @head: the stack head
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
