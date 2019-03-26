#include "lists.h"

/**
 * add_nodeint - add new node
 *
 * @head: input head
 *
 * @n: int input
 *
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	if (head == NULL)
		return (NULL);
	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->next = *head;
	*head = fresh;
	return (*head);
}
