#include "holberton.h"

/**
 * _isalpa - converts all letters to 1
 *
 * @c: Input Value
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') ||(c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
