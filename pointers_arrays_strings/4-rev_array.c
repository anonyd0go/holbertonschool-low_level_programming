#include "main.h"

/**
 * reverse_array - Reverses the content of an array of ints
 * @a: starting point of the array of ints
 * @n: size of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int j = n - 1;

	for (i = 0; i < (n / 2); i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
