#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 * Return: does not return anything, only prints
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
