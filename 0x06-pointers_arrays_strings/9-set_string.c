#include "holberton.h"

/**
 * set_string - set string
 *
 * @s: input
 *
 * @to: input accept pointer
 *
 * Return: s
 */
void set_string(char **s, char *to)
{
	*s = &*to;
}
