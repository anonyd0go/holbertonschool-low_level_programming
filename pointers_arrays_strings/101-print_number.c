#include "main.h"

/**
 * print_number - prints a number
 * @n: Number to print
 * Return: Void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}

	if (n < 0)
	{
		if (n / 10)
			print_number(n / -10);
	}
	else
	{
		if (n / 10)
			print_number(n / 10);
	}

	if (n < 0)
		_putchar('0' + ((n % 10) * -1));
	else
		_putchar('0' + (n % 10));
}
