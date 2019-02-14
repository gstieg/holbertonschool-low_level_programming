#include "holberton.h"

/**
 * print_most_numbers - skip numbers 2 and 4
 *
 */
void print_most_numbers(void)
{
	int t;

	for (t = 0; t < 10; t++)
		if (!(t == 2 || t == 4))
			_putchar(n + '0');
	_putchar('\n');
}
