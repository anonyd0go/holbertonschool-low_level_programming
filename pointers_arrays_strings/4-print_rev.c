#include "main.h"

/**
 * print_rev - Prints a str in reverse followed by a new line
 * @s: string to be printed
 * Return: Always void
 */
void print_rev(char *s)
{
	int ln = 0;

	while (*(s + ln) != '\0')
	{
		ln++;
	}

	for (ln -= 1; ln >= 0 ; ln--)
	{
		_putchar(*(s + ln));
	}
	_putchar('\n');
}
