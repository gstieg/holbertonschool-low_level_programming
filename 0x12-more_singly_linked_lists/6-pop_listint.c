#include "more_lists.h"

/**
 * pop_listint - delete node
 *
 * @head: input
 *
 * Return: node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next_n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	next_n = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_n;
	return (n);
}
