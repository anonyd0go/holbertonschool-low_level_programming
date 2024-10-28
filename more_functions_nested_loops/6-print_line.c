#include "main.h"

/**
 * print_line - Prints a line
 * @n: Determines length of line
 * Return: Always void
 */
void print_line(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		int i;

		for (i = n; i > 0; i--)
			_putchar('_');
		_putchar('\n');
	}
}
