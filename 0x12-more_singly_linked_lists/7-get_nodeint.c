#include "more_lists.h"

/**
 * get_nodeint_at_index - get the index of the node
 *
 * @head: input
 *
 * @index: input of the index
 *
 * Return: returns the node value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *h;

	if (head == NULL)
		return (NULL);
	h = head;
	n = 0;
	while (n < index)
	{
		if (h->next == NULL)
			return (NULL);
		h = h->next;
		n++;
	}
	return (h);
}
