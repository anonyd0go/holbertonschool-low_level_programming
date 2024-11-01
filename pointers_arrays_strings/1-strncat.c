#include "main.h"

/**
 * _strncat - Concatinates two strings until N chars
 * @dest: Where both strs will be concatinated
 * @src: Str that will be added
 * @n: Elements to be concatinated from src
 * Return: Pointer to the concatinated str
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_ln = 0;
	int s_ln = 0;
	int i;

	while (dest[d_ln] != '\0')
		d_ln++;

	while (src[s_ln] != '\0')
		s_ln++;

	if (n > s_ln)
		n = s_ln;
	if (n < 0)
		n = 0;

	for (i = 0; i < n; i++, d_ln++)
		dest[d_ln] = src[i];

	dest[d_ln + 1] = '\0';

	return (dest);
}
