#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an int
 * @array: Where we will look for the int
 * @size: Elements in the array
 * @cmp: function to use to compare values
 * Return: index of where cmp is true, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !size)
		return (-1);
	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
