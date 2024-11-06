#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a matrix
 * @a: Matrix of numbers
 * @size: size of the matrix
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * size - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
