#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - iterays and prints
 *
 * @array: input for array
 *
 * @size: input for size of the array
 *
 * @action: printing function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL)
		if (action != NULL)
			for (a = 0; a < size; a++)
				action(array[a]);
}
