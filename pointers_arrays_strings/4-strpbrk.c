#include "main.h"

/**
 * _strpbrk - searches a str for the first occurance of a set of bytes
 * @s: Str to be searched
 * @accept: Bytes to search for
 * Return: Pointer to the first occurance of a byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
