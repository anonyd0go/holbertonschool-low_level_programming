#include "main.h"

/**
 * print_rev - Prints a str in reverse followed by a new line
 * @s: string to be printed
 * Return: Always void
 */
void print_rev(char *s)
{
	char *ps = s;

	while (*ps != '\0')
	{
		ps++;
	}

	do {
		ps--;
		_putchar(*ps);
	} while (ps > s);
	
	if (*ps != '\0')
		_putchar('\n');
}
