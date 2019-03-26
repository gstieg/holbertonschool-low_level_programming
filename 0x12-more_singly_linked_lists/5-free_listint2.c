#include "lists.h"

/**
 * free_listint2 - free all
 *
 * @head: input
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
	*head == NULL
}
