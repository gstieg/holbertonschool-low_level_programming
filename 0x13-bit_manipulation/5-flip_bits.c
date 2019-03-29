#include "holberton.h"

/**
 * flip_bits - flip bits
 *
 * @n: long int
 *
 * @m: long int
 *
 * Return: the flipped bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int a;

	a = n ^ m;
	while (a > 0)
	{
		if (a & 1)
			count++;
		a = a >> 1;
	}
	return (count);
}
