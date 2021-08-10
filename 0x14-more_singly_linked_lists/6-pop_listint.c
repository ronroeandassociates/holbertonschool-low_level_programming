#include "lists.h"

/**
 * pop_listint - deletes head node, and returns head node's data
 * @head: head node
 *
 * Return: data from head node, 0 if empty
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if ((*head) == NULL)
		return (0);

/*get value of n*/
	num = (*head)->n;
/*get value of next node*/
	temp = (*head)->next;

	free(*head);
/*assign head to next node*/
	*head = temp;
	return (num);
}
