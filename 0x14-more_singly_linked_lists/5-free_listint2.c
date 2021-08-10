#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *position;
	listint_t *temp;

	if (head == NULL)
		return;

	if (*head != NULL)
	{
		position = (*head)->next;
		(*head)->next = NULL;
		while (position != NULL)
		{
			temp = position->next;
			free(position);
			position = temp;
		}
	}
	free(*head);
	*head = NULL;
}
