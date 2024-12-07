#include "main.h"
unsigned int _strlen(const char *s);

/**
 * binary_to_uint - converts binary num on a str to a unsigned int
 * @b: String containing only chars '0' and '1'
 * Return: The converted number or an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = n << 1;
		n += b[i] - '0';
		i++;
	}
	return (n);
}


/**
 * _strlen - finds the length of a str
 * @s: string to analyze
 * Return: The size of the str
 */
unsigned int _strlen(const char *s)
{
	int i;

	if (!s)
		return (0);
	for (i = 0; s[i]; i++)
		continue;
	return (0);
}
