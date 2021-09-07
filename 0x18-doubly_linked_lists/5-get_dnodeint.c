#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of linked list to retrieve
 *
 * Return: nth node at index, NULL if fails
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *cursor;
	unsigned int i = 0;

	cursor = head;
	while (cursor != NULL)
	{
		count++;
		cursor = cursor->next;
	}

	if (index > count)
		return (NULL);

	cursor = head;
	for (i = 0; i < index; i++)
	{
		cursor = cursor->next;
	}
	return (cursor);
}
