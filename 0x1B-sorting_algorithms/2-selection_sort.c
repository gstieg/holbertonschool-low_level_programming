#include "sort.h"

/**
 * selection_sort - uses the selection method to sort a doubly linked list
 * @array: a pointer to the first element in the array
 * @size: number of elemnts in the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (array == NULL || size == 1)
		return;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
		i++;
	}
}

/**
 * swap - swaps two integers in an array
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
