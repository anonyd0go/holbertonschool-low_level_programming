#include "main.h"

/**
 * _strlen_recursion - Finds the length of a str
 * @s: Str to find its len
 * Return: Size of the str in int
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else if (*s == '\0')
		return (1);

	return (1 + _strlen_recursion(s + 1));
}
