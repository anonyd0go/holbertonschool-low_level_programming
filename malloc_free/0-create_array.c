#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it
 * @size: Size of the array
 * @c: Character to initiallize the array
 * Return: ptr to new array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (0);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (0);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
