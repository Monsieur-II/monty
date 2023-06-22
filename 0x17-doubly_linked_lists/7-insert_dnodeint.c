#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: address of pointer to head node
 * @idx: the given index
 * @n: integer value of new node
 *
 * Return: address of new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h || (!*h && idx != 0))
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new->prev = temp;
			new->next = temp->next;
			if (temp->next)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
