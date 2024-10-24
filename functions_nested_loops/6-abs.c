#include "main.h"

/**
 * _abs - Gives the absolute value of an int
 * @n: the integer to evaluate
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
