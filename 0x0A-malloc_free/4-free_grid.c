#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2D grid
 *
 * @grid: input
 *
 * @height: height input
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	if (grid == NULL)
		free(grid);
	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
