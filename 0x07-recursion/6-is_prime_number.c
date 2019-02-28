#include "holberton.h"

/**
 * recursion - make the recursion work
 *
 * @n; input number
 *
 * @div: divide
 *
 * Return: prime number
 */
int recursion(int n, int div)
{
	if (div < 0)
		return (-1);
	if (div == 0)
		return (-1);
	else if (n % div != 0)
	{
		div--;
		return (recursion(n, div));
	}
	return (div);
}

/**
 * is_prime_number - find out if its prime
 *
 * @n: input
 *
 * Return: square root
 */
int is_prime_number(int n)
{
	int div = n - 1;

	if (recursion(n, div) == 1)
		return (1);
	return (0);
}
