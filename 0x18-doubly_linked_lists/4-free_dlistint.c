#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor;
	dlistint_t *temp;

	cursor = head;
	while (cursor != NULL)
	{
		temp = cursor;
		cursor = cursor->next;
		free(temp);
	}
}
