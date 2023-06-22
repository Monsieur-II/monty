#include "monty.h"

/**
 * s_mul - multiplies the top two elements
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */

void s_mul(stack_t **stack, unsigned int line_number)
{
	int result;
	stack_t *head = *stack;

	if (!head || !(head && head->next))
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		free(tool.buffer);
		free_dlist(*stack);
		fclose(tool.file);
		exit(EXIT_FAILURE);
	}

	result = head->n * head->next->n;
	head->next->n = result;

	s_pop(stack, line_number);
}


