#include "main.h"

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
