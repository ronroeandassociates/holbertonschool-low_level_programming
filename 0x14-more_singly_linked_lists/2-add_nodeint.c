#include "lists.h"

/**
 * add_nodeint - add new node at beginning of a list
 * @head: head node
 * @n: value in node
 *
 * Return: Address of new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node;

/*Allocate space for node*/
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
/*Initialize node*/
	node->n = n;
/*Assign node to head of list*/
	node->next = *head;
	*head = node;
	return (node);
}
