#include "monty.h"

/**
 * s_sub - subracts top element from second element
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */

void s_sub(stack_t **stack, unsigned int line_number)
{
	int result;
	stack_t *head = *stack;

	if (!head || !(head && head->next))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		free(tool.buffer);
		free_dlist(*stack);
		fclose(tool.file);
		exit(EXIT_FAILURE);
	}

	result = head->next->n - head->n;
	head->next->n = result;

	s_pop(stack, line_number);
}


