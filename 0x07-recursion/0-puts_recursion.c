#include "holberton.h"

/**
 * _puts_recursion - prints the string
 *
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
