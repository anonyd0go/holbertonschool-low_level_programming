#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1 to compare
 * @s2: String 2 to compare
 * Return: 0 if strings are equal, neg if s1 < s2, pos if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}
