#include "lists.h"

/**
 * add_dnodeint - add a new node to the beginning of the list
 *
 * @head: head
 *
 * @n: int for the node
 *
 * Return: new node or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	(*head)->prev = newnode;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
}
