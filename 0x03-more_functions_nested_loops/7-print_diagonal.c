#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: value of input
 */
void print_diagonal(int n)
{
	int d, dl;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (dl = 0; dl < d; dl++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
