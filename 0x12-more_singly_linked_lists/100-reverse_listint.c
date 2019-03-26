#include "lists.h"

/**
 * reverse_listint - reverse the list
 *
 * @head: input of head
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hold = NULL;
	listint_t *next_h;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next_h = (*head)->next;
		(*head)->next = hold;
		hold = *head;
		*head = next_h;
	}
	*head = hold;
	return (*head);
}
