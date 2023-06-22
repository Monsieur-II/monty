#include "monty.h"

monty_t tool = {NULL, NULL, NULL};

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	stack_t *head = NULL;
	unsigned int line_number = 0;
	char *buffer = NULL;
	size_t bufsize = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);

		tool.file = fopen(argv[1], "r");
		if (!tool.file)
		{
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}

		while (getline(&buffer, &bufsize, tool.file) > 0)
		{
			/*tool.buf = buffer*/
			/*tokenize into tool.args*/
			/*execute line*/
		}
		
