#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - fills with numbers
 *
 * @min: minimum
 *
 * @max: maximum
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *a;
	int c = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	while (min <= max)
	{
		a[c] = min;
		min++;
		c++;
	}
	return (a);
}
