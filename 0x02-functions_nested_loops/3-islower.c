#include "holberton.h"

/**
 * _islower - checks for the lowercase letter
 *
 * @c: Input Value
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
