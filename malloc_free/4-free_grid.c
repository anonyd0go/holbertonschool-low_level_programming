#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D created by alloc_grid
 * @grid: ptr to the grid we want to free
 * @height: Number of rows in the grid
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

