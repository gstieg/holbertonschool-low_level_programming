#include "holberton.h"

/**
 * _strlen - returns the length of the string
 *
 * @s: input value
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; ++s)
		length++;
	return (length);
}
