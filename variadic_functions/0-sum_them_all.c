#include "variadic_functions.h"

/**
 * sum_them_all - sums all numbers passed as parameters
 * @n: number of ints passed
 * Return: Sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int arg, sum = 0;
	va_list lst;

	if (n == 0)
		return (0);

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(lst, int);
		sum += arg;
	}
	va_end(lst);
	return (sum);
}
