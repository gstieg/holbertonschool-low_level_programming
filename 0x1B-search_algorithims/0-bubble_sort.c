#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble
 sort algorithm
 *
 * @array: array
 *
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a;
	int new = 1;

	if (size < 2)
		return;
	while (new == 1)
	{
		a = 0;
		while (a < size - 1)
		{
			if (array[a] > array[a + 1])
			{
				new = array[a];
				array[a] = array[a + 1];
				array[a + 1] = new;
				a = 1;
				print_array(array, size);
			}
			a++;
		}
	}
}
