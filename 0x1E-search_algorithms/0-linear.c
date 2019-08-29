#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: array input
 * @size: size
 * @value: value of
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int a = 0;

	if (array == NULL)
		return (-1);
	while (a < size)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}
	return (-1);
}
