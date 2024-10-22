#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print single digit number combination
 * Return: Always 0
 */
int main(void)
{
	int ascii = 48;

	while (ascii < 57)
	{
		putchar(ascii);
		putchar(',');
		putchar(' ');
		ascii++;
	}
	putchar(ascii);

	return (0);
}
