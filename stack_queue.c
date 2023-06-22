#include "monty.h"

/**
 * s_stack - switches to stack mode
 * @stack: address of pointer top of stack
 * @line_number: current line
 *
 * Return: nothing
 */
void s_stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	tool.mode = 0;
}


/**
 * s_queue - switches to queue mode
 * @stack: address of pointer front of queue
 * @line_number: current line
 *
 * Return: nothing
 */
void s_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	tool.mode = 1;
}
