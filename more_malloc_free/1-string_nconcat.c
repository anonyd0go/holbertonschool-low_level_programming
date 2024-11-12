#include "main.h"
#include <stdlib.h>
unsigned int _strlen(char *str);

/**
 * string_nconcat - concatenates two strs
 * @s1: Str to be concatinated fully
 * @s2: str to concatinate n bytes
 * @n: Number of bytes to concatinate from s2
 * Return: ptr to the new str, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *concat;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;

	concat = malloc(((len1 + len2) * sizeof(char)) + 1);
	if (concat == NULL)
		return (0);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < n; i++)
		concat[len1 + i] = s2[i];
	concat[len1 + n] = '\0';

	return (concat);
}


/**
 * _strlen - Finds the length of a str
 * @str: String to find the length
 * Return: the length of the str
 */
unsigned int _strlen(char *str)
{
	if (!str || str == NULL || *str == '\0')
		return (0);
	if (*(str + 1) == '\0')
		return (1);

	return (_strlen(str + 1) + 1);
}
