#include "main.h"

/**
 * print_rev - Prints a str in reverse followed by a new line
 * @s: string to be printed
 * Return: Always void
 */
void print_rev(char *s)
{
	char *ps = s;

	if (*s == '\0')
		return;

	while (*ps != '\0')
	{
		ps++;
	}

	do {
		ps--;
		_putchar(*ps);
	} while (ps > s);
}
