#include "main.h"

/**
 * leet - encodes a str into leet speech
 * @s: String to be transformed
 * Return: Pointer to modified str
 */
char *leet(char *s)
{
	int i, j;
	int ls = 5;
	char *sp = s;
	char alph[] = {'a', 'e', 'o', 't', 'l'};
	char leet[] = {'4', '3', '0', '7', '1'};

	for (i = 0; sp[i] != '\0'; i++)
	{
		for (j = 0; j < ls; j++)
		{
			if (sp[i] == alph[j] || sp[i] == alph[j] - ('a' - 'A'))
				sp[i] = leet[j];
		}
	}

	return (s);
}
