#include "holberton.h"

/**
 * puts2 - prints one char insted of 2
 *
 * @str: value of string
 */
void puts2(char *str)
{
	int count = 0, counter = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	count =  count - 1;
	while (count >= counter)
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');
}
