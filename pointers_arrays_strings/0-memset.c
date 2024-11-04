#include "main.h"

/**
 * _memset - fills n bytes of memory with b from s
 * @s: Starting point in memory
 * @b: Character that will replace the space in memory
 * @n: spaces in memory that will be replaced
 * Return: Pointer to the modified memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
