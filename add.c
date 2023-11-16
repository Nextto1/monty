#include "monty.h"
/**
 * f_add - it adds to the top additional
 * two elements of the stack.
 * @head: head stack
 * @counter: the line_number for the function
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int len = 0, aux;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	aux = hd->n + hd->next->n;
	hd->next->n = aux;
	*head = hd->next;
	free(hd);
}
