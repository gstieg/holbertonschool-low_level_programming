#include "holberton.h"

/**
 * print_diagsums - print the sums diagonal
 *
 * @a: input
 *
 * @size: size of pointer
 */
void print_diagsums(int *a, int size)
{
	int count = 0, sum = 0, s = size + 1;

	while (count * s < size * size)
	{
		sum += a[count * s];
		count++;
	}
	printf("%d, ", sum);
	sum = 0;
	s = size - 1;
	count = 1;
	while (count <= size)
	{
		sum += a[count * s];
		count++;
	}
	printf("%d\n", sum);
}
