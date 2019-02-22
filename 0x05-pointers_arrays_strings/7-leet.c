#include "holberton.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: input
 *
 * Return: string conversion
 */
char *leet(char *str)
{
	int count = 0, count_a;
	char *alpha = "aeotlAEOTL";
	char *num = "4307143071";

	while (str[count] != '\0')
	{
		count_a = 0;
		while (alpha[count_a] != '\0')
		{
			if (str[count] == alpha[count_a])
				str[count] = num[count_a];
			count_a++;
		}
		count++;
	}
	return (str);
}
