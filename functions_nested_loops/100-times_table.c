#include "main.h"
void print_multi_digit(int n);

/**
 * times_table - Prints multiplication tables from 0 to 15
 * @n: the size of the table
 * Return: Void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int mult;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			if (j <= n)
			{
				_putchar(',');
				_putchar(' ');
			}

			mult = i * j;
			if (mult < 10)
				_putchar(' ');

			if (mult < 100)
				_putchar(' ');

			prnt_num(mult);
		}
		_putchar('\n');
	}
}

/**
 * prnt_num - prints a num in ascii recursively
 * @n: number to print
 * Return: Void
 */
void prnt_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		prnt_num( n / 10);

	_putchar('0' + (n % 10));
}
