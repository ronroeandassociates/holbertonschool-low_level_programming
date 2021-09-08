#include "lists.h"

/**
 * delete_end - deletes node from end of list
 * @h: head of list
 * @idx: index of list
 */

void delete_end(dlistint_t *h, unsigned int idx)
{
	dlistint_t *cursor, *temp;
	unsigned int i = 0;

	cursor = h;
	for (i = 0; i < (idx - 1); i++)
		cursor = cursor->next;

	temp = cursor->next;
	cursor->next = NULL;
	free(temp);
}

/**
 * delete_middle - deletes node from middle of list
 * @h: head of list
 * @idx: index of list
 */

void delete_middle(dlistint_t *h, unsigned int idx)
{
	dlistint_t *cursor, *temp;
	unsigned int i = 0;

	cursor = h;
	for (i = 0; i < (idx - 1); i++)
		cursor = cursor->next;

	temp = cursor->next;
	cursor->next->next->prev = cursor;
	cursor->next = cursor->next->next;
	free(temp);
}

/**
 * delete_dnodeint_at_index - deleted node at index of dlistint_t list
 * @head: head of list
 * @index: index to delete node
 *
 * Return: 1 on success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor, *temp;
	unsigned int count = 0;

	if ((*head) == NULL || head == NULL)
		return (-1);

	cursor = *head;
	while (cursor != NULL)
	{
		count++;
		cursor = cursor->next;
	}
	if (index >= count)
		return (-1);

	if (index == 0 && count == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0 && count > 1)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	if (index == (count - 1))
	{
		delete_end(*head, index);
		return (1);
	}
	delete_middle(*head, index);
	return (1);
}
