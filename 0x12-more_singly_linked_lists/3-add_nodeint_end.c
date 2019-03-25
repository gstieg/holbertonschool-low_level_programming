#include "more_lists.h"

/**
 * add_nodeint_end - add new node to the end
 *
 * @head - intput for head
 *
 * @n: input int
 *
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *last;

	if (head == NULL)
		return (NULL);
	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->next = NULL;
	last = *head;
	if (last != NULL)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = fresh;
	}
	else
	{
		*head = fresh;
	}
	return (*head);
}
