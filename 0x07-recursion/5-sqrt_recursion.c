#include "holberton.h"

/**
 * recursion - returns the natrual sqaure root
 *
 * @n: number
 *
 * @div: divider
 *
 * Return: square root
 */
int recursion(int n, int div)
{
	if (div == n)
		return (-1);
	else if (div * div != n)
	{
		div++;
		return (recursion(n, div));
	}
	return (div);
}

/**
 * _sqrt_recursion - find sqaure root
 *
 * @n: input
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int div = 2;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (recursion(n, div));
}
