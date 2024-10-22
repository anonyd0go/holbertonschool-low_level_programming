#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the lower case alphabet
 * Return: Always 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
