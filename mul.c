#include "monty.h"
/**
 * f_mul - It multiplicates the top of
 * the two elements of the stack.
 * @head: head stack of the function
 * @counter: the line_number of the function
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	aux = hd->next->n * hd->n;
	hd->next->n = aux;
	*head = hd->next;
	free(hd);
}
