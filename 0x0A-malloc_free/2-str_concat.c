#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concentrate strings
 *
 * @s1: input
 *
 * @s2: input
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0, len2 = 0, a = 0, a2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);
	while (a < len1)
	{
		str[a] = s1[a];
		a++;
	}
	while (a2 < len2)
	{
		str[a] = s2[a2];
		a++;
		a2++;
	}
	return (str);
}
