#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: represents the 2-dimensional array
 * @height: height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height ; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}
	free(grid);
}

