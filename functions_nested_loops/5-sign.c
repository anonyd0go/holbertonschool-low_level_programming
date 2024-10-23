#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Integer that wil be verified
 * Return: 1 if int is pos, 0 if int is zero, -1 if int is neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
