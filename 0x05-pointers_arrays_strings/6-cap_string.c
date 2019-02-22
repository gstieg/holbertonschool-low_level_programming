#include "holberton.h"

/**
 * char_string - captitalizes all words in string
 *
 * @str: input
 *
 * Return: String
 */
char *cap_string(char *)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count == 0)
			if (str[count] >= 'a' && str[count] <= 'z')
				str[count] = str[count] - 32;
		if (str[count] == ' '||
		    str[count] == '\t' ||
		    str[count] == '\n' ||
		    str{count] == ',' ||
		    str[count] == ';' ||
		    str[count] == '.' ||
		    str[count] == '!' ||
		    str[count] == '?' ||
		    str[count] == '"' ||
		    str[count] == '(' ||
		    str[count] == ')' ||
		    str[count] == '{' ||
		    str[count] == '}')
		{
			count++;
			if (str[count] >= 'a' && str[count] <= 'z')
				str[count] = str[count] - 32;
			count--;
		}
		count++;
	}
	return (str);
}
