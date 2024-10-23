#include "main.h"

/**
 * main - Prints the str '_putchar'
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";
	unsigned int i;

	for (i = 0; i < sizeof(str) - 1 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
