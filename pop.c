#include "monty.h"

/**
 * s_pop - removes the top element from the stack
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */

void s_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if (!h)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		free(tool.buffer);
		free_dlist(*stack);
		fclose(tool.file);
		exit(EXIT_FAILURE);
	}

	h = (*stack)->next;
	free(*stack);
	if (h)
		h->prev = NULL;
	*stack = h;
}
