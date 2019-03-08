#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concat two strings
 *
 * @s1: first input
 *
 * @s2: second input
 *
 * @n: number for end
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int c1 = 0, c2 = 0, c_a = 0, c_b = 0, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;
	if (n >= c2)
		n = c2;
	n = n + c1;
	str = malloc(sizeof(char) * (n + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	while (c < n)
	{
		if (c_a < c1)
		{
			str[c] = s1[c_a];
			c_a++;
		}
		else if (c_b < c2)
		{
			str[c] = s2[c_b];
			c_b++;
		}
		c++;
	}
	str[c] = '\0';
	return (str);
}
