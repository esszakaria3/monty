#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack.
 * @head: the stack head
 * @counter: the line of number
 * Return: no return
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *d;
	(void)counter;

	d = *head;
	while (d)
	{
		if (d->n > 127 || d->n <= 0)
		{
			break;
		}
		printf("%c", d->n);
		d = d->next;
	}
	printf("\n");
}
