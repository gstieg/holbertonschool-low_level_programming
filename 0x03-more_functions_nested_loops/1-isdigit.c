#include "holberton.h"

/**
 * _isdigit - checks for 0 through 9
 *
 * @c: value of input
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
