#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble
 sort algorithm
 * @array: array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a;
	int bubble = 0, b = 1;

	if (size < 2)
		return;
	while (b == 1)
	{
		b = 0;

		for (a = 1; a < size; a++)
		{
			if (array[a] > array[a + 1])
			{
				bubble = array[a];
				array[a] = array[a + 1];
				array[a + 1] = bubble;
				print_array(array, size);
				b = 1;
			}
		}
	}
}
