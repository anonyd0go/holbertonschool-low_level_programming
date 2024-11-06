#include "main.h"
int prime_chk(int n, int x);

/**
 * is_prime_number - Tells user if the number is prime
 * @n: Number to analyze
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);

	return (prime_chk(n, n - 1));
}

/**
 * prime_chk - checks the number if its prime
 * @n: Number to check
 * @x: the number halved in order to compare prime
 * Return: 1 if prime, 0 otherwisw
 */
int prime_chk(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	else
		return (prime_chk(n, x - 1));
}

