#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal
 * @n: Length of the line
 * Return: Always void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
