#include "monty.h"
/**
 * f_pop - the top to be printed
 * @head: head stack for the function
 * @counter: line_number for the function
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *hd;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	*head = hd->next;
	free(hd);
}
