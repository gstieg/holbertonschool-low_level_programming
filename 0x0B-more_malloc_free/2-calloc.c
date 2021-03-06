#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - fills memory
 *
 * @s: input
 *
 * @b: byte
 *
 * @n: input of int
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}

/**
 * _calloc - memory
 *
 * @nmemb: input
 *
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *o;

	if (nmemb == 0 || size == 0)
		return (NULL);
	o = malloc(size * nmemb);
	if (o == NULL)
	{
		free(o);
		return (NULL);
	}
	_memset((void *)o, 0, nmemb * size);
	return (o);
}
