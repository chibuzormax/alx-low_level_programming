#include "main.h"

/**
 * free_grid - Frees a 2-D grid
 * @grid: the grid
 * @height: height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
