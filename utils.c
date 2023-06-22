#include "monty.h"

/**
 * tokenize - separates input into arguments
 * @str: inpuot
 * @args: array of arguments
 * @max_args: maximum no. of arguments
 * @delimiters: delimiters
 *
 * Return: nothing
 */
void tokenize(char *str, char **args, int max_args, char *delimiters)
{
	char *token = strtok(str, delimiters);
	int i = 0;

	while (token && i < max_args)
	{
		args[i++] = token;
		token = strtok(NULL, delimiters);
	}

	args[i] = NULL;
}
