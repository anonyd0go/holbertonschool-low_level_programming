#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Str to print
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == "")
		return;
	if (*(s + 1) != '\0')
		_print_rev_recursion(s + 1);

	_putchar(*s);
}
