#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int to swap
 * @b: second int to swap
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
