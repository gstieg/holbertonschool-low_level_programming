#include "hash_tables.h"

/**
 * key_index - get the index
 *
 * @key: key
 *
 * @size: size of array
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (0);
	return (hash_djb2(key) % size);
}
