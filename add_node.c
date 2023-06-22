#include "monty.h"

/**
 * add_dnode - adds new node at beginning of list
 * @head: address of pointer to the list
 * @n: integer value of node
 *
 * Return: address of new node or NULL if it failed
 */

stack_t *add_dnode(stack_t **head, const int n)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(tool.buffer);
		fclose(tool.file);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
