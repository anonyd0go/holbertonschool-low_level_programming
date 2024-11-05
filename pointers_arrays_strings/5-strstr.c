#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The str to be searched
 * @needle: The str that is being searched for
 * Return: Pointer to the first occurance of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int ln_n, ln_h, i, j;
	int f = 0;
	char *fnd;

	for (ln_n = 0; needle[ln_n] != '\0' ; ln_n++)
		;
	for (ln_h = 0; haystack[ln_h] != '\0' ; ln_h++)
		;

	if (ln_n > ln_h)
		return (0);
	else if (ln_n == 0)
		return (haystack);

	for (i = 0; i < ln_h; i++)
	{
		if (haystack[i] == needle[0])
		{
			fnd = haystack + i;
			for (j = 0; j < ln_n; j++)
			{
				if (haystack[i + j] == needle[j])
					f++;
				else
				{
					f = 0;
					break;
				}

				if ((j == ln_n - 1) && f)
					return (fnd);
			}
		}
		else
			continue;
	}

	return (0);
}
