#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n)
 * @head: pointer to head node
 *
 * Return: the sum, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
