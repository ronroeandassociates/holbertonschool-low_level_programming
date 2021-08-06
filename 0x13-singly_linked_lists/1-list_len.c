#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: list to determine number of elements
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
