#include "holberton.h"

/**
 * print_sign - writes function that prints the sign or a number
 *
 * @n: Input Value
 *
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
