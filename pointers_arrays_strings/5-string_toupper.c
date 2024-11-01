#include "main.h"

/**
 * string_toupper - changes lower case letters to upper
 * @s: string to change to upercase
 * Return: pointer to the sstring in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;
	char *p = s;

	while (*(p + i) != '\0')
	{
		if (*(p + i) >= 'a' && *(p + i) <= 'z')
			*(p + i) -= ('a' - 'A');
		i++;
	}

	return (s);
}
