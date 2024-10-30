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

	while (*(cp + ln) != '\0')
	{
		*(pst + ln) = *(cp + ln);
		ln++;
	}

	return (dest);
}
