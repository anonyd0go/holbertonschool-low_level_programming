#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in upper and lower case
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

	alph = 'A';

	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
