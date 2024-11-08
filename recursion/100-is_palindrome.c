#include "main.h"
int _strlen_recursion(char *s);
int pal_check(int fwd, int rev, char *s);

/**
 * is_palindrome - Determines if a str is a palindrome
 * @s: Str that will be analyzed
 * Return: 1 if the str is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (pal_check(0, len, s));
}


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


/**
 * pal_check - Checks the strings characters
 * @fwd: Position in str from left to right
 * @rev: Position in str from right ot left
 * @s: Str to analyze
 * Return: 1 if all characters are equal, 0 otherwise
 */
int pal_check(int fwd, int rev, char *s)
{
	if (s[fwd] != s[rev])
		return (0);
	else if (rev <= fwd)
		return (1);

	return (pal_check(fwd + 1, rev - 1, s));
}
