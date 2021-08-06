#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to be evaluated
 *
 * Return: The length of the string
 */

unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{}
	return (i);
}

/**
 * add_node_end - adds a new node at the beginning of the list_t list
 * @head: start node
 * @str: data in node
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *end_node;
	unsigned int length = _strlen(str);

	if (head == NULL)
		return (NULL);

/* Initialize end_node*/
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->len = length;
	end_node->str = strdup(str);
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	node = *head;
/*Check head NULL*/
	if (*head == NULL)
	{
		*head = end_node;
		end_node->next = NULL;
		return (end_node);
	}
	else
	{
	/*Move node location to end*/
		while (node->next != NULL)
		{
			node = node->next;
		}
	/*Add end_node to end*/
			node->next = end_node;
			end_node->next = NULL;
	}
	return (end_node);
}
