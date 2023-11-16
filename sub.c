#include "monty.h"
/**
  *f_sub- It does the subtration
  *@head: head stack for the function
  *@counter: the line_number for the function
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sub, node;

	aux = *head;
	for (node = 0; aux != NULL; node++)
		aux = aux->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*head = aux->next;
	free(aux);
}
