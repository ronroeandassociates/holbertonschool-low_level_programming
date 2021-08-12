#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: head of list
 */

void free_listint(listint_t *head)
{
	listint_t *position, *temp;

	if (head == NULL)
		return;

	if (head != NULL)
	{
		position = head;
		while (position != NULL)
		{
			temp = position->next;
			free(position);
			position = temp;
		}
	}
}
