#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array (using malloc)
 * @nmemb: Number of elements
 * @size: Size of each of the elements
 * Return: Pointer to the created array or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	unsigned char *value;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	value = ptr;

	for (i = 0; i < nmemb; i++)
		value[i] = 0;

	return (ptr);
}
