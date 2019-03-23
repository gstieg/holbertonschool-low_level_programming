#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - memory block
 *
 * @ptr: input
 *
 * @old_size: input old
 *
 * @new_size: new input
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ch, *con;
	unsigned int c;

	con = ptr;
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	ch = malloc(new_size);
	if (ch == NULL)
		return (NULL);
	if (new_size < old_size)
		for (c = 0; c < new_size; c++)
			ch[c] = con[c];
	free(ptr);
	return (ch);
}
