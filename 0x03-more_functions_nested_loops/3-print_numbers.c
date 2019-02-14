#include "holberton.h"

/**
 * print_numbers - print numbers
 *
 * Return: 0 to 9
 */
void print_numbers(void)
{
	int b;

	for (b = 0; b < 10; b++)
		_putchar(b + '0');
	_putchar('\n');
}
