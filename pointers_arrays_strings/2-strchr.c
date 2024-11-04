#include "main.h"

/**
 * _strchr - Locates a char in a str
 * @s: String that will be searched
 * @c: Character to search for
 * Return: pointer to the first occurance of c
 */
char *_strchr(char *s, char c)
{
	int i;
	int ln_s;

	for (ln_s = 0; *(s + ln_s) != 0; ln_s++)
		;

	for (i = 0; i <= ln_s; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (0);
}
