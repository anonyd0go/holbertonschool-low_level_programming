#include "main.h"

/**
 * _puts - Prints a str followed by a new line
 * @str: String to be directed to stdout
 * Return: Always void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
