#include "lists.h"

/**
 * add_node_end - add new node at the end
 *
 * @head: input head
 *
 * @str: string
 *
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *hold;
	int count = 0;

	if (head == NULL || str == NULL)
		return (NULL);
	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);
	fresh->str = strdup(str);
	while (str[count] != '\0')
		count++;
	fresh->len = count;
	fresh->next = NULL;
	hold = *head;
	if (hold != NULL)
	{
		while (hold->next != NULL)
		{
			hold = hold->next;
		}
		hold->next = fresh;
	}
	else
	{
		*head = fresh;
	}
	return (*head);
}
