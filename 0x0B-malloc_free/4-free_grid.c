#include "main.h"

/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @height : int
 * Description: Longer description of the function)?
 *
 * Return: the returned value is void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
