#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: head node
 * @idx: index to insert node
 * @n: value of n for node
 *
 * Return: address of new node, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *position, *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	position = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		position = position->next;
		if (position == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = position->next;
	position->next = node;
	return (node);
}
