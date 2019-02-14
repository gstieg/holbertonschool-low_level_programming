#include "holberton.h"

/**
 * print_square - prints a square
 *
 * @size: value of input
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (a = 0; a < size; a++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
