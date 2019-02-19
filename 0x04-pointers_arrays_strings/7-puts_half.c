#include "holberton.h"

/**
 * puts_half - prints half string
 *
 * @str: value of input
 */
void puts_half(char *str)
{
	int count = 0;
	int half = 0;

	while (str[count] != '\0')
	{
		count += 1;
	}
	if (count % 2 == 0)
		half = count / 2;
	else
		half = (count + 1) / 2;
	count = count - 1;
	while (half <= count)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
