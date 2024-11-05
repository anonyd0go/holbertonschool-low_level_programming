#include "main.h"

/**
 * _strspn - gets the length of a prefixed substring
 * @s: Str to be analyzed
 * @accept: the bytes that it will accept
 * Return: int of bytes that the substring has
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l;

	i = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				l++;
				i++;
				break;
			}
			else
				l = 0;
		}
		if (!l)
			break;
	}

	return (i);
}
