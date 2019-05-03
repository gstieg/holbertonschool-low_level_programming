#include "lists.h"

/**
 * dlistint_len - length of the linked list
 *
 * @h: head
 *
 * Return: node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (node);
	while ( h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
