#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of linked list
 *
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cursor;
	int len = 0;

	cursor = h;

	while (cursor != NULL)
	{
		len++;
		cursor = cursor->next;
	}
	return (len);
}
