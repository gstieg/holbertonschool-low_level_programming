#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - find matches
 *
 * @array: input for array
 *
 * @size: input for size
 *
 * @cmp: comparing
 *
 * Return: -1 if nothing matches in the function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);
	if (cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}
