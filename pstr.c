#include "monty.h"

/**
 * s_pstr - prints the string starting from top
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */
void s_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;
	(void)line_number;

	while (h)
	{
		if (h->n <= 0 || h->n > 127)
			break;
		putchar(h->n);
		h = h->next;
	}

	putchar('\n');
}

