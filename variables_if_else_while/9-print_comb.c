#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print single digit number combination
 * Return: Always 0
 */
int main(void)
{
	int ascii;

	for (ascii = 48; ascii <= 57 ; ascii++)
	{
		putchar(ascii);
		if (ascii < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
