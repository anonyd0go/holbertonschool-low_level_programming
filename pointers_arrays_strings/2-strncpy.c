#include "main.h"

/**
 * _strncpy - Copy n elements of src to dest
 * @dest: Where the copied string will be in memory
 * @src: Str that will bie copied
 * @n: Elements to copy
 * Return: pointer to copied str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
