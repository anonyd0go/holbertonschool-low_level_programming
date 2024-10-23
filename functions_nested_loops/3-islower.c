#include "main.h"

/**
 * _islower - determines if a char is lowercase
 * @c: Character used to find if lowercase or upper
 * Return: 1 if char is lower case, 0 otherwise
 */
int _islower(int c)
{
	int confirmation;

	if ('a' <= c && c <= 'z')
		confirmation = 1;
	else
		confirmation = 0;

	return (confirmation);
}
