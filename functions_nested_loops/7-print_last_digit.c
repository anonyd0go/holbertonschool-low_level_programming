#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int d = n;

	if (d < 0)
		d *= -1;

	d = d % 10;
	_putchar(d + '0');
	return (d);
}
