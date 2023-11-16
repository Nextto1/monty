#include "monty.h"
/**
 * f_pchar - It displays the characters
 * at the top of the stack with a new line
 * @head: head stack of the function
 * @counter: the line_number of the function
 * Return: no return
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *hd;

	hd = *head;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
