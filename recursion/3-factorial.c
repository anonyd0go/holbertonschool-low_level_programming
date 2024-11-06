#include "main.h"

/**
 * factorial - Finds the factorial of a number
 * @n: Number to vind factorial
 * Return: The factorial of said number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
