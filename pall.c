#include "monty.h"

/**
 * s_pall - prints all the elements of the list
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */

void s_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;
	(void)line_number;

	if (!h)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

}
