#include "holberton.h"

/**
 * _puts - prints the string
 *
 * @str: String of value
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
