#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a dlistint_t list
 * @head: head of list
 *
 * Return: sum of all n data, 0 if empty list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
