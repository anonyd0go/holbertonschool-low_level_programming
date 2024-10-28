#include "main.h"

/**
 * print_triangle - prints a right aligned triangle
 * @size: Size of triangle
 * Return: Always void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size < 1)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = size; j > i + 1; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
