#include "lists.h"

/**
 * list_count - get count of list
 * @head: head of list
 *
 * Return: count
 */

unsigned int list_count(listint_t *head)
{
	unsigned int num = 0;

	if (head == NULL)
		return (num);
	while (head != NULL)
	{
		num++;
		head = head->next;
	}
	return (num);
}

/**
 * free_middle - frees node from middle of list
 * @head: head of list
 * @idx: index of list
 */

void free_middle(listint_t *head, unsigned int idx)
{
	listint_t *temp, *prev, *next;
	unsigned int i;

	prev = head;
	for (i = 0; i < (idx - 1); i++)
		prev = prev->next;

	temp = head;
	for (i = 0; i < idx; i++)
		temp = temp->next;

	next = head;
	for (i = 0; i < (idx + 1); i++)
		next = next->next;

	prev->next = next;
	free(temp);
}

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of index
 * @index: index to delete node
 *
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0, i;
	listint_t *temp, *position;

	if (head == NULL || (*head) == NULL)
		return (-1);
	count = list_count(*head);
	if (index == 0 && count == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0 && count > 1)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
		return (1);
	}
	if (index == (count - 1))
	{
		temp = *head;
		position = *head;
		for (i = 0; i < (index - 1); i++)
			temp = temp->next;
		position = temp->next;
		temp->next = NULL;
		free(position);
		return (1);
	}
	if (index < (count - 1))
	{
		free_middle(*head, index);
		return (1);
	}
	return (-1);
}
