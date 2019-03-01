#include "holberton.h"
#define NULL 0

/**
 * _strchr - locate character
 *
 * @s: input pointer
 *
 * @c: char
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			s = &s[count];
			return (s);
		}
	}
	if (c == '\0')
		return (&s[count]);
	return (NULL);
}
