#include "holberton.h"

/**
 * get_endianness - that checks the endianness.
 *
 * Return: 0 or 1 depending
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *c = (char *) &b;

	b = (int) *c;
	return (b);
}
