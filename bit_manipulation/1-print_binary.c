#include "main.h"

/**
 * print_binary - prints an unsingned long int in binary
 * @n: Number to print
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
