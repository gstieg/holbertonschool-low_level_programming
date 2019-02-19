#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints side by side
 *
 * @a: value of array input
 *
 * @n: integer value
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		count++;
		if (count != n)
			printf(", ");
	}
	printf("\n");
}
