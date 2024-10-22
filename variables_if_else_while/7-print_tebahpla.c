#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in reverse using putchar
 * Return: Always 0
 */
int main(void)
{
	char alph;

	for (alph = 'z' ; alph >= 'a' ; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
