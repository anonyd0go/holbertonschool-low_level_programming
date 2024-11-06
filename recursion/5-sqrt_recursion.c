#include "main.h"
int fnd_rt(int rs, int re, int n);

/*
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number that will be used to find sqrt
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (fnd_rt(0, n, n));

}

/*
 * fnd_rt - finds the square root of a number
 * @rs: Start point of a range
 * @re: Endpoint of a range
 * @n: Number to find sqrt
 * Return: The square root of the number
 */
int fnd_rt(int rs, int re, int n)
{
	if (rs <= re)
	{
		int rt = (rs + re) / 2;

		if (rt * rt == n)
			return rt;
		else if (rt * rt < n)
			return (fnd_rt(rt + 1, re, n));
		else
			return (fnd_rt(rs, rt - 1, n));
	}
	return (-1);
}
