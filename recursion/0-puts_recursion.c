#include "main.h"

/**
 * _puts_recursion - Prints a str, followed by a new line
 * @s: String to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
}
