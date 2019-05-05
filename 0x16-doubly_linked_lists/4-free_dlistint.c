 #include "lists.h"

/**
 * free_dlistint - free the doubly linked lists
 *
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold = NULL;

	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
