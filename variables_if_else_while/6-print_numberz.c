#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints digits using putchar
 * Return: Always 0
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
