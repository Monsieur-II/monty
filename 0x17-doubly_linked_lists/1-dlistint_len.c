#include "lists.h"

/**
 * dlistint_len - Returns number of elements in the list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
