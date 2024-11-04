#include "main.h"

/**
 * _memcpy - copies n bytes form memory of src to dest
 * @dest: Destination of copied data
 * @src: Starting point of data to be copied
 * @n: Size of data to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
