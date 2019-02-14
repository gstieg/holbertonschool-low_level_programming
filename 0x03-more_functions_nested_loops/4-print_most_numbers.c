#include "holberton.h"

/**
 * print_most_numbers - omit numbers 2 and 4
 *
 */
void print_most_numbers(void)
{
	int t;

	for (t = 0; t < 10; t++)
		if (!(t == 2 || t == 4))
			_putchar(t + '0');
	_putchar('\n');
}
