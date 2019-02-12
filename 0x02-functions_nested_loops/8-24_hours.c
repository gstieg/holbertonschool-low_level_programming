#include "holberton.h"
/**
 * jack_bauer - print
 *
 * Return: last digit
 */
void jack_bauer(void)
{
	int c, n;

	for (c = 0; n < 24; c++)
		for (n = 0; n < 60; n++)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
}
