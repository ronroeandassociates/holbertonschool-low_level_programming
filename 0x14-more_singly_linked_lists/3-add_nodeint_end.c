#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: head of list
 * @n: node value
 *
 * Return: address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *endnode;
	listint_t *position;

/*initialize endnode*/
	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);

	endnode->n = n;
	endnode->next = NULL;
/*if no list*/
	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}
	else
	{
/*determine position*/
	position = *head;
		while (position->next != NULL)
		{
		position = position->next;
		}
	position->next = endnode;
	}
	return (endnode);
}
