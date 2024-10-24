#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n *= -1;

	d = n % 10;
	_putchar(d + 48);
	return (d);
}
