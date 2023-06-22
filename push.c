#include "monty.h"
/**
 * s_push - adds node to stack
 * @stack: address of pointer to stack
 * @line_number: current line number
 *
 * Return: nothing
 */
void s_push(stack_t **stack, unsigned int line_number)
{
	char *data = tool.args[1];
	int i, check;
