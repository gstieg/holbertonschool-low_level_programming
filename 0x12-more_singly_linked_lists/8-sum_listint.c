#include "more_lists.h"

/**
 * sum_listint - sum all int
 *
 * @head: input
 *
 * Return: node count
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
