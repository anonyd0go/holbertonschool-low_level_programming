#include "main.h"
void print_multi_digit(int n);

/**
 * times_table - Prints multiplication tables 1-9
 * Return: Void
 */
void times_table(void)
{
	int i;
	int j;
	int mult;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			if (j <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			mult = i * j;
			if (mult < 10)
				_putchar(' ');

			if (mult < 10)
				_putchar(mult + '0');
			else
				print_multi_digit(mult);
		}
		_putchar('\n');
	}
}

/**
 * print_multi_digit - prints digits greater than 9 and less than 100
 * @n: digit to change into _putchar format
 * Return: Void
 */
void print_multi_digit(int n)
{
	int last = n % 10;
	int first = (n / 10);

	_putchar(first + '0');
	_putchar(last + '0');
}
