#include "main.h"

/**
 * _strlen - returns the length of a str
 * @s: string to calculate
 * Return: an int based on the leanght of the str
 */
int _strlen(char *s)
{
	int lngth = 0;

	while (*(s + lngth) != '\0')
	{
		lngth++;
	}

	return (lngth);
}
