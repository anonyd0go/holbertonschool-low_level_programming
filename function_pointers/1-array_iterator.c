#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function through an array
 * @array: Array to perform action
 * @size: Size of the array
 * @action: Function to perform
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
