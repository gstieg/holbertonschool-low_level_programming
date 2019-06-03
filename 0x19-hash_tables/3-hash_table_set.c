#include "hash_tables.h"

/**
 * hash_table_set - add something to the table
 *
 * @ht: pointer
 * @key: key
 * @value: value
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *add, *finder = NULL;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	finder = ht->array[index];
	while (finder != NULL)
	{
		if (strcmp(finder->key, key) == 0)
		{
			free(finder->value);
			finder->value = strdup(value);
			return (1);
		}
		finder = finder->next;
	}
	add = malloc(sizeof(hash_node_t));
	if (add == NULL)
		return (0);
	if (add->key == NULL)
	{
		free(add);
		return (0);
	}
	add->value = strdup(value);
	if (add->value == NULL)
	{
		free(add->key);
		free(add);
		return (0);
	}
	add->next = ht->array[index];
	ht->array[index] = add;
	return (1);
}
