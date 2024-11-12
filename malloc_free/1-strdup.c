#include "main.h"
#include <stdlib.h>
unsigned int _strlen(char *str);

/**
 * _strdup - Copyes a str into allocated memory
 * @str: String to be copied
 * Return: Pointer to copied str or null if there is an error
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *cp;

	if (!str || str == NULL)
		return (0);

	size = _strlen(str);
	cp = malloc((size_t)size * sizeof(char));

	if (cp == NULL)
		return (0);

	for (i = 0; i < size; i++)
		*(cp + i) = *(str + i);

	return (cp);
}


/**
 * _strlen - Finds the length of a str
 * @str: string to find the length
 * Return: an unsigned int with the size of the str
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
			;

		return (i);
	}

	return (0);
}
