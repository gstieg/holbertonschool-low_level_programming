#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array
 *
 * @size: input size
 *
 * @c: char
 *
 * Return: NULL or string
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	while (count < size)
	{
		str[count] = c;
		count++;
	}
	return (str);
}
