#include "main.h"

/**
 * rot13 - rotates letters 13 spaces
 * @s: Str to be encoded
 * Return: Pointer to encoded str
 */
char *rot13(char *s)
{
	int i;
	int j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (s[i] == in[j])
			{
				s[i] = ot[j];
				break;
			}
		}
	}

	return (s);
}
