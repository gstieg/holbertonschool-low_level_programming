#include "holberton.h"

/**
 * factorial - returns the facotrial of a given number
 *
 * @n: input
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n > 1)
		n = n * factorial(n - 1);
	else if (n < 0)
		return (-1);
	return (n);
}
