#include "main.h"

/**
 * print_binary - prints an unsingned long int in binary
 * @n: Number to print
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned int i, j = 0;
	char bytes[32];

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 1 << 31; i > 0; i >>= 1, j++)
	{
		if ((n & i) != 0)
			bytes[j] = '1';
		else
			bytes[j] = '0';
	}

	i = 0;
	while (bytes[i] != '1')
		i++;
		
	for (; i < j; i++)
		_putchar(bytes[i]);

}
