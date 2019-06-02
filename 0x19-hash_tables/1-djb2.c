#include "hash_tables.h"

/**
 * hash_djb2 - create the hash
 *
 * @str: string used
 *
 * Return: new hash that is made
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
