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
 * add_node - adds a new node at the beginning of the list_t list
 * @head: start node
 * @str: data in node
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
		list_t *new_node;
		unsigned int length;

		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		length = _strlen(str);
		new_node->len = length;
		new_node->str = strdup(str);
		new_node->next = *head;
		*head = new_node;

		return (new_node);
}
