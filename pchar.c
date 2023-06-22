#include "monty.h"

/**
 * s_pchar - prints the char at the top of the stack
 * @stack: address of pointer to head of list
 * @line_number: current line
 *
 * Return: nothing
 */
void s_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if (!h)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		free(tool.buffer);
		free_dlist(*stack);
		fclose(tool.file);
		exit(EXIT_FAILURE);
	}

	if (h->n < 0 || h->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free(tool.buffer);
		free_dlist(*stack);
		fclose(tool.file);
		exit(EXIT_FAILURE);
	}

	putchar(h->n);
	putchar('\n');

}

