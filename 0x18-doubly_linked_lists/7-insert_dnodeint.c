#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in type dlistint_t list
 * @h: head of list
 * @idx: index to insert node
 * @n: value of n of new node
 *
 * Return: address of new node, NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cursor;
	unsigned int count = 0;
	dlistint_t *new;
	unsigned int i = 0;

	cursor = *h;
	while (cursor != NULL)
	{
		count++;
		cursor = cursor->next;
	}
	if (idx > count)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == count)
		return (add_dnodeint_end(h, n));

	cursor = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (i = 0; i < (idx - 1); i++)
		cursor = cursor->next;

	new->next = cursor->next;
	cursor->next->prev = new;

	cursor->next = new;
	new->prev = cursor;
	return (new);
}
