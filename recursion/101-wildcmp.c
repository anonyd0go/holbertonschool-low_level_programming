#include "main.h"

/**
 * wildcmp - compares two strs
 * @s1: The string being analyzed
 * @s2: String/pattern being compared to
 * Return: 1 if two patterns are considered similar, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else if (*s1 && *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
