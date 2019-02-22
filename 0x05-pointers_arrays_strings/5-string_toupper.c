#include "holberton.h"

/**
 * string_toupper - prints out upper case
 *
 * @str: input
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int count = 0, n = 0;

	while (str[n] != '\0')
		n++;
	while (count < n)
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] = str[count] - 32;
		count++;
	}
	return (str);
}
