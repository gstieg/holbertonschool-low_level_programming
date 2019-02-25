#include "holberton.h"

/**
 * _memcpy - copies memeory area
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: input
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*(dest + count) = *(src + count);
	}
	return (dest);
}
