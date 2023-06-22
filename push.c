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
	int n, check = 0, i = 0;

	if (data)
	{
		if (data[i] == '-')
			i++;

		for (; data[i]; i++)
		{
			if (data[i] < 48 || data[i] > 57)
				check = 1;
		}
	}
	if (!data || check == 1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free(tool.buffer);
		fclose(tool.file);
		free_dlist(*stack);
		exit(EXIT_FAILURE);
	}
	n = atoi(data);
	if (tool.mode == 0)
		add_dnode(stack, n);
	else if (tool.mode == 1)
		add_dnode_end(stack, n);
}
