#include "more_lists.h"

/**
 * print_listint_safe - print the list
 *
 * @head: input of head
 *
 * Return: node count
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h, *hold;
	int count = 0, n = 0;

	if (head == NULL)
		return (0);
	hold = head;
	while (hold != NULL)
	{
		printf("[%p] %d\n", (void *)hold, hold->n);
		hold = hold->next;
		count++;
		h = head;
		n = 0;
		while (n < count)
		{
			if (h == hold)
			{
				printf("-> [%p] %d\n", (void *)h, h->n);
				return (count);
			}
			else
			{
				h = h->next;
				n++;
			}
		}
	}
	return (count);
}
