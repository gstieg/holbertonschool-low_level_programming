#include "sort.h"

/**
 * bubble_sort - using the bubble sort method
 *
 * @array: array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, a;

	for (a = size; a >= 1; a--)
	{
		for (i = 1 ; size > i; i++)
		{
			if (array[i] < array[i - 1])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				print_array(array, size);
				array[i] = temp;
			}
		}
	}
}
