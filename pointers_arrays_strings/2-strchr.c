#include "main.h"

/**
 * _strchr - Locates a char in a str
 * @s: String that will be searched
 * @c: Character to search for
 * Return: pointer to the first occurance of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	return (0);
}
