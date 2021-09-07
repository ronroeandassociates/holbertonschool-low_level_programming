#include "lists.h"

/**
 * add_dnodeint_end - add node to end of a dlistint_t list
 * @head: head of list
 * @n: value of in node
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *cursor;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	cursor = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (cursor->next != NULL)
	{
		cursor = cursor->next;
	}
	cursor->next = new;
	new->prev = cursor;

	return (new);
}
