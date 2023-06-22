#include "monty.h"

/**
 * add_dnode_end - adds node at end of the list
 * @head: address of pointer to the head
 * @n: integer value of node
 *
 * Return: address of new node or NULL if it failed
 */
stack_t *add_dnode_end(stack_t **head, const int n)
{
	stack_t *new_node, *temp = *head;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(tool.buffer);
		fclose(tool.file);
		/*free stack*/
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
