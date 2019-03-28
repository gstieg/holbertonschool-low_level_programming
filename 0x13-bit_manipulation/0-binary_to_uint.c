#include "holberton.h"

/**
 * binary_to_uint - convert to binary
 *
 * @b: input for binary
 *
 * Return: the converted number of binary
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	unsigned int num = 0, num2 = 1;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
		count++;
	count--;
	while (count >= 0)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		num += (b[count] - '0') * num2;
		count--;
		num2 *= 2;
	}
	return (num);
}
