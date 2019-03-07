#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates mem
 *
 * @b: input mem size
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
