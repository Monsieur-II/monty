#include "monty.h"

/**
 * s_rotl - rotates the stack to the top
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */

void s_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *last = *stack;
	(void)line_number;

	if (!top || !top->next)
		return;

	while (last->next)
		last = last->next;

	last->next = top;
	top->prev = last;
	*stack = top->next;
	top->next = NULL;
	(*stack)->prev = NULL;
}

/**
 * s_rotr - rotates the stack to the bottom
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */

void s_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *last = *stack;
	(void)line_number;

	if (!top || !top->next)
		return;

	while (last->next)
		last = last->next;

	last->prev->next = NULL;
	last->next = top;
	top->prev = last;
	last->prev = NULL;
	*stack = last;
}
