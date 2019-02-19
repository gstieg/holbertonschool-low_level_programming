#include "holberton.h"

/**
 * swap - swaps the values of two integers
 *
 * @a: value of input
 *
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int a1 = *b;
	int b1 = *a;

	*a = a1;
	*b = b1;
}
