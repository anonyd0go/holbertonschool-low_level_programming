#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of ints
 * @min: Minimum number in the range
 * @max: Max num in the range
 * Return: Pointer to the created array from min to max, NULL if fail
 */
int *array_range(int min, int max)
{
	int nums, i, j;
	int *range;

	if (min > max)
		return (0);

	nums = (max - min) + 1;
	range = malloc((nums * sizeof(int)));
	if (range == NULL)
		return (0);

	for (i = 0, j = min; i < nums; i++, j++)
		range[i] = j;

	return (range);
}
