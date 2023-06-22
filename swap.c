#include "monty.h"

/**
 * s_swap - swaps the top two elements of the stack
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */

void s_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *next = NULL;

	if (!head || !(head && head->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free(tool.buffer);
		free_dlist(*stack);
		fclose(tool.file);
		exit(EXIT_FAILURE);
	}

	next = head->next;
	head->next = next->next;
	if (next->next)
		next->next->prev = head;
	head->prev = next;
	next->next = head;
	next->prev = NULL;

	*stack = next;
}
