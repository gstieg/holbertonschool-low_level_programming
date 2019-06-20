#include "sort.h"
/**
 * swap: swap the values
 * @a - a value
 * @b - b value
 */
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*b = tmp;
	*b = *a;
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if(size < 2)
		return;
	real_sort(array, 0, size -1, size);
}

/**
 * real_sort - real sort function for quick sort
 * @array - array
 * @first -  first
 * @last - last
 */
void real_sort(int *array, int first, int last, size_t size)
{
	int pivot, c, d;
	if(first < last)
	{
		pivot = first;
		c = first;
		d = last;
		while(c < d)
		{
			while(array[c] <= array[pivot] && c < last)
				c++;
			while(array[d] > array[pivot])
				d--;
			if(c < d)
			{
				swap(&array[c], &array[d]);
			}
		}
		swap(&array[pivot], &array[d]);
		real_sort(array, first, d - 1, size);
		real_sort(array, d + 1, last, size);
		print_array(array, size);
	}
}
