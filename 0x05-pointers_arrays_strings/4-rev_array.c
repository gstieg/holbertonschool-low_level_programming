#include "holberton.h"

/**
 * reverse_array - reverses the content of an arry of integers
 *
 * @a: first value
 *
 * @n: second value
 */
void reverse_array(int *a, int n)
{
	int count = 0, tmp = 0;

	n = n - 1;
	while (count < n)
	{
		tmp = a[n];
		a[n] = a[count];
		a[count] = tmp;
		count++;
		n--;
	}
}
