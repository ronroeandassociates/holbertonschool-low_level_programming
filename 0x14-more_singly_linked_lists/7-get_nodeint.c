#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: head of list
 * @index: index of list
 *
 * Return: the node at index, NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *position;

	if (head == NULL)
		return (NULL);

	position = head;
	while (position != NULL)
	{
		if (count == index)
			return (position);

		count++;
		position = position->next;
	}
	return (NULL);
}
