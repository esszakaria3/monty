#include "monty.h"

/**
 * f_pall - To prints the stack
 * @head: This is the stack head
 * @counter: this line not used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *d;
	(void)counter;

	d = *head;
	if (d == NULL)
		return;
	while (d)
	{
		printf("%d\n", d->n);
		d = d->next;
	}
}
