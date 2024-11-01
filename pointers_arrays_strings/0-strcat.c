#include "main.h"

/**
 * _strcat - Concatinates two str (Apppend src to dest)
 * @dest: The destination of concatinated str
 * @src: The str to be appended
 * Return: pointer to the dest str
 */
char *_strcat(char *dest, char *src)
{
	int s_ln = 0;
	int d_ln = 0;

	while (dest[d_ln] != '\0')
		d_ln++;

	while (src[s_ln] != '\0')
	{
		dest[d_ln] = src[s_ln];
		s_ln++;
		d_ln++;
	}

	dest[d_ln + 1] = '\0';

	return (dest);
}
