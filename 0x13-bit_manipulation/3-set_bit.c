#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: input for bit
 *
 * @index: index input
 *
 * Return: 1 or -1 depending on success or failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	*n |= 1 << index;
	return (1);
}
