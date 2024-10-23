#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetical
 * @c: Character to view
 * Return: 1 if alphabetical, 0 otherwise
 */
int _isalpha(int c)
{
	if ('A' <= c && c <= 'z')
		return (1);

	return (0);
}
