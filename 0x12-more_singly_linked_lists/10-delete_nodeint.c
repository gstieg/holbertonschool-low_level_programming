#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 *
 * @head: input head
 *
 * @index: index input
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n_head;
	listint_t *hold;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
		return (1);
	}
	count = 1;
	n_head = *head;
	while (count < index)
	{
		if (n_head == NULL)
			return (-1);
		n_head = n_head->next;
		count++;
	}
	hold = n_head->next;
	n_head->next = hold->next;
	free(hold);
	return (1);
}
