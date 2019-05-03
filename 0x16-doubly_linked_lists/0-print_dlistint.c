#include "lists.h"

/**
 * print_dlistint - print elements of list
 *
 * @h: head
 *
 * Return: node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
