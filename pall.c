#include "monty.h"
/**
 * f_pall - It displays out the stack
 * @head: the head stack
 * @counter: the no used for the function
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
