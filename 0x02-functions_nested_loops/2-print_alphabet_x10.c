#include "holberton.h"

/**
 * print_alphabet_x10 - this prints the alphabet 10 times
 *
 * Return: 0.
 */
void print_alphabet_x10(void);
{
	int n;
	int a;

	for (n = 1; n <= 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
