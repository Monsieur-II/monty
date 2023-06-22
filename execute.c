#include "monty.h"

/**
 * execute_cmd - checks for appropriate function and executes
 * @stack: address of variable pointing to top of stack
 * @line_number: current line number
 */
void execute_cmd(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	char *command = tool.args[0];
	instruction_t ops[] = {
		{"push", s_push},
		{"pall", s_pall},
		{NULL, NULL}
	};

	while (ops[i].opcode && command)
	{
		if (strcmp(ops[i].opcode, command) == 0)
		{
			ops[i].f(stack, line_number);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%d: unknown intstruction %s\n", line_number, command);
	free_dlist(*stack);
	fclose(tool.file);
	free(tool.buffer);
	exit(EXIT_FAILURE);
}
