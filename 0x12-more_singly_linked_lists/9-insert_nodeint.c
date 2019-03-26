#include "more_lists.h"

/**
 * insert_nodeint_at_index - insert a new node
 *
 * @head: input of head
 *
 * @idx: index
 *
 * @n: int
 *
 * Return: head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_head;
	listint_t *new;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	count = 1;
	n_head = *head;
	while (count < idx)
	{
		n_head = n_head->next;
		if (n_head == NULL)
			return (NULL);
		count++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = n_head;
		*head = new;
		return (*head);
	}
	else
	{
		new->next = n_head->next;
		n_head->next = new;
	}
	return (new);
}
