#include "main.h"

/**
 * _strcpy - Copies the contents of a str to annother
 * @dest: Where to copy the str to
 * @src: Where the str will come from
 * Return: Pointer to the copied str
 */
char *_strcpy(char *dest, char *src)
{
	char *cp = src;
	char *pst = dest;
	int ln = 0;
	int i;

	while (*(cp + ln) != '\0')
		ln++;

	for (i = 0; i <= ln; i++)
	{
		*(pst + i) = *(cp + i);
	}

	return (dest);
}
