#include "monty.h"
/**
 * f_pstr - It starts at the top of the stack,
 * followed by a new and print out the string
 * @head: head stack for the function
 * @counter: the line_number of the function
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
