#include "sort.h"

/**
 * bubble_sort - uses the bubble sort method
 *
 * @array: array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a;
	int bubble, new;

	if (size < 2)
		return;
	for (new = size; new >= 1; new--)
	{
		a = 1;
		{
			if (array[a] > array[a + 1])
			{
				bubble = array[a - 1];
				array[a - 1] = array[a];
				array[a] = bubble;
				print_array(array, size);
			}
		}
	}
}
