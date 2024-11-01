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
	int s_ln = 0;
	int d_ln = 0;
	int i;

	while (src[s_ln] != '\0')
		s_ln++;
	while (dest[d_ln] != '\0')
		d_ln++;

	if (n > s_ln)
		n = s_ln;
	if (n < 0)
		n = 0;

	if (n == s_ln)
	{
		for (i = 0; i <= n; i++)
			dest[i] = src[i];
		while (i < d_ln)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}

	return (dest);
}
