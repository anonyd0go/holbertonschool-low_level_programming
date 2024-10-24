#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int d = n;

	d = d % 10;

	if (d < 0)
		d *= -1;

	_putchar('0' + d);

	return (d);
}
