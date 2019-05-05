#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of the list
 *
 * @head: head of the list
 *
 * @n: int for the node
 *
 * Return: new node, NULL if fail
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hold = *head;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head)
	{
		while (hold->next)
			hold = hold->next;
		hold->next = newnode;
		newnode->prev = hold;
	}
	else
		*head = newnode;
	return (newnode);

}
