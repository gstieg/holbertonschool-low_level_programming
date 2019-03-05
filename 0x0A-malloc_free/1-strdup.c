#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate the string
 *
 * @str: input
 *
 * Return: NULL or the string
 */
char *_strdup(char *str)
{
	char *s;
	int a = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	len++;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	while (a < len)
	{
		s[a] = str[a];
		a++;
	}
	return (s);
}
