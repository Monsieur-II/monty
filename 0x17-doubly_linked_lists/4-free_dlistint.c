#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: pointer to the head
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
