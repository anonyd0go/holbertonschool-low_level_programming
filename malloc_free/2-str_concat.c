#include "main.h"
#include <stdlib.h>
unsigned int _strlen(char *str);

/**
 * str_concat - concatinates two strs
 * @s1: One of the strs to concatinate
 * @s2: Second str to concatinate
 * Return: a pointer to new memory of concatinanted strs
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *concat;

	if (s1 == 0 && s2 == 0)
		return (0);

	if (s1 != NULL)
		len1 = _strlen(s1);
	else
		len1 = 0;
	if (s2 != NULL)
		len2 = _strlen(s2);
	else
		len2 = 0;

	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (0);

	if (len1)
	{
		for (i = 0; i < len1; i++)
			concat[i] = s1[i];
	}
	if (len2)
	{
		for (i = 0; i < len2; i++)
			concat[len1 + i] = s2[i];
	}
	concat[len1 + len2] = '\0';

	return (concat);
}


/**
 * _strlen - Custom strlen function
 * @str:  String we want the length of
 * Return: Length of the str or 0 if empty
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	if (!str)
		return (0);

	while (*(str + len))
		len++;

	return (len);
}
