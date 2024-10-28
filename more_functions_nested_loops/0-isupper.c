#include "main.h"

/**
 * _isupper - Determines if a ascii val is upper
 * @c: ascii value to analyze
 * Return: 1 if the value represents upercase chars or 0 not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
