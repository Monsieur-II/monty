#include "monty.h"

/**
 * s_pint - prints value a the top of the list
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */
void s_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if (!h)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(tool.buffer);
		free_dlist(*stack);
		fclose(tool.file);
		exit(EXIT_FAILURE);
	}

	else
		printf("%d\n", h->n);
}

