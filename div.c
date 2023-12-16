#include "monty.h"

/**
 * f_div -  To divides the top two elements of the stack and give the result
 * @head: This is the stack head
 * @counter: The line number
 * Return: no return
*/

void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	d = *head;
	if (d->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = d->next->n / d->n;
	d->next->n = aux;
	*head = d->next;
	free(d);
}
