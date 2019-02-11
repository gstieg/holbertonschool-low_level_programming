#include "holberton.h"

/**
 * print_alphabet- this is printing the alphabet in lower case
 *
 * Return: 0.
 */
void print_alphabet(void)
{

	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
