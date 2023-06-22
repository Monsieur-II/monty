#include "monty.h"

/**
 * s_add - adds the top two elements
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */

void s_add(stack_t **stack, unsigned int line_number)
{
	int sum;
	stack_t *head = *stack;

	if (!head || !(head && head->next))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		free(tool.buffer);
		free_dlist(*stack);
		fclose(tool.file);
		exit(EXIT_FAILURE);
	}

	sum = head->n + head->next->n;
	head->next->n = sum;

	s_pop(stack, line_number);
}


