#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create a 2D grid
 *
 * @width: width
 *
 * @height: height
 *
 * Return: grid or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid, a, x, y;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			while (a >= 0)
			{
				free(grid[a]);
				a--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	return (grid);
}
