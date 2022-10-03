#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 * @grid: block of memory to be freed
 * @height: array height
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
