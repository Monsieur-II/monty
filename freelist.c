#include "monty.h"

/**
 * free_dlist - frees the list
 * @head: pointer to the head
 *
 * Return: nothing
 */
void free_dlist(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
