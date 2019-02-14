#include "holberton.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 */
void more_numbers(void)
{
	int d, d_tens, d_ones;
	int digit;

	for (digit = 1; digit <= 10; digit++)
	{
		for (d = 0; d <= 14; d++)
		{
			d_tens = d / 10;
			d_ones = d % 10;
			if (d > 9)
				_putchar(d_tens + '0');
			_putchar(d_ones + '0');
		}
		_putchar('\n');
	}
}
