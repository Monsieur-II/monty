#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: address of head pointer variable
 * @index: the given index
 *
 * Return: 1 on success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head, *next = NULL;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		if (current)
			current->prev = NULL;
		*head = current;
		return (1);
	}
	next = current->next;

	while (next && i < index)
	{
		if (i == index - 1)
		{
			next = next->next;
			free(current->next);
			current->next = next;
			if (next)
				next->prev = current;
			return (1);
		}
		else
		{
			next = next->next;
			current = current->next;
		}
		i++;
	}
	return (-1);
}
