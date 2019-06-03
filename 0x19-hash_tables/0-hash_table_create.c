#include "hash_tables.h"

/**
 * hash_table_create - make a has table
 *
 * @size: input of the new hash table that was created
 *
 * Return: Returns a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	if (!size)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	array = malloc(sizeof(hash_node_t **));
	if (!array)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = array;
	return (table);
}
