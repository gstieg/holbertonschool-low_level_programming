#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (a = 0; a < size; a++)
			{
				if (a < size - b - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
