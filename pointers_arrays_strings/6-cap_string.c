#include "main.h"
int in(char c, char *arr);

/**
 * cap_string - capitalizes all words of a str
 * @s: str that will be capitalized
 * Return: pointer to the capitalized str
 */
char *cap_string(char *s)
{
	int i;
	char *sp = s;
	char seps[13] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (sp[0] >= 'a' && sp[0] <= 'z')
		sp[0] -= ('a' - 'A');
	for (i = 1; sp[i] != '\0'; i++)
	{
		if (in(sp[i - 1], seps) && sp[i] >= 'a' && sp[i] <= 'z')
			sp[i] -= ('a' - 'A');
	}

	return (s);
}

/**
 * in - Checks if a char is in an array
 * @c: char to check
 * @arr: array to check
 * Return: 1 if in the array, 0 otherwise
 */
int in(char c, char *arr)
{
	int i;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (c == arr[i])
			return (1);
	}
	return (0);
}
