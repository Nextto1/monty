#include "monty.h"
/**
 * f_mod - it computates the others of
 * the division of the second in the stack
 * top element of the stack by the top element
 * @head: head stack of the function
 * @counter: the line_number of the function
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = hd->next->n % hd->n;
	hd->next->n = aux;
	*head = hd->next;
	free(hd);
}
