#include "monty.h"

/**
 * f_add - sum the top two elements of the stack and give result
 * @head:  This is the stack head
 * @counter: The line number
 * Return: no return
*/

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *d;
	int len = 0, aux;

	d = *head;
	while (d)
	{
		d = d->next;
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
	d = *head;
	aux = d->n + d->next->n;
	d->next->n = aux;
	*head = d->next;
	free(d);
}
