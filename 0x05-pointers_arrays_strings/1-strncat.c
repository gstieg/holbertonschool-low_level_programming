#include "holberton.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: input value
 *
 * @src: second value
 *
 * @n: third value
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, s_count = 0, f_count = 0;

	while (dest[f_count] != '\0')
		f_count++;
	while (src[s_count] != '\0')
		s_count++;
	if (s_count < n)
		n = s_count;
	while (count < n)
	{
		dest[f_count] = src[count];
		f_count++;
		count++;
	}
	return (dest);
}
