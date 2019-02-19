#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: input value
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	count = count - 1;
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
