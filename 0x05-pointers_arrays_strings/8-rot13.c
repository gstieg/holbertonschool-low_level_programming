#include "holberton.h"

/**
 * rot13 - convert to rot 13
 *
 * @str: input
 *
 * Return: String convert
 */
char *rot13(char *str)
{
	int count = 0, count_a;
	char *one = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyz";

	while (str[count] != '\0')
	{
		count_a = 0;
		while (one[count_a] != '\0')
		{
			if (str[count] == one[count_a])
			{
				str[count] = rot13[count_a];
				break;
			}
			count_a++;
		}
		count++;
	}
	return (str);
}
