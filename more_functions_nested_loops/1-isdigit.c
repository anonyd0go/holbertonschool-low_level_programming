#include "main.h"

/**
 * _isdigit - determines if an int has a digit ascii val
 * @c: Char to be analyzed
 * Return: 1 if c is acii digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
