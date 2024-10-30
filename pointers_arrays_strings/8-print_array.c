#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of arrays of ints
 * @a: The array to print
 * @n: the number of elements to print
 * Return: Void
 */
void print_array(int *a, int n)
{
	int ln = 0;
	int i;

	while (*(a + ln) != '\0')
		ln++;

	if (n <= ln)
	{
		for (i = 0; i < n; i++)
			if (i < n - 1)
				printf("%d, ", *(a + i));
			else
				printf("%d", *(a + i));

		printf("\n");
	}
	else
		return;
}
