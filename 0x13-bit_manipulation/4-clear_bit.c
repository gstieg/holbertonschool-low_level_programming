#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: input
 *
 * @index: index
 *
 * Return: 1 or -1 depending on success or failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
