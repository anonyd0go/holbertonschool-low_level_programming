#include "main.h"
void prnt_num(int n);

/**
 * print_to_98 - prints the numbers until it reaches 98
 * @n: starting point to go to 98
 * Return: Always void
 */
void print_to_98(int n)
{
	int number = n;

	while (number > 98)
	{
		prnt_num(number);
		_putchar(',');
		_putchar(' ');
		number--;
	}

	while (number < 98)
	{
		prnt_num(number);
		_putchar(',');
		_putchar(' ');
		number++;
	}
	_putchar('0' + 9);
	_putchar('0' + 8);
	_putchar('\n');
}

/**
 * prnt_num - prints a sibgle number in ascii recursively
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
		prnt_num(n / 10);

	_putchar('0' + (n % 10));
}
