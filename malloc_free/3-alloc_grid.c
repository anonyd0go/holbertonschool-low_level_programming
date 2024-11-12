#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Dynamically allocates memory for a 2D array
 * @width: Number of columns
 * @height: Number of rows
 * Return: Pointer to 2D array of ints
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int i, j;

	if (width < 1 || height < 1)
		return (0);

	grd = (int **) malloc((size_t)height * sizeof(int *));
	if (grd == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		grd[i] = (int *)malloc((size_t)width * sizeof(int));
		if (grd[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(grd[i]);
			free(grd);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grd[i][j] = 0;
	}

	return (grd);
}
