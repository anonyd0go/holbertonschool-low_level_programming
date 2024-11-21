#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints n number of strs
 * @separator: What is printed between the strs
 * @n: number of strs
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *stp;
	va_list lst;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		stp = va_arg(lst, char *);
		if (stp)
			printf("%s", stp);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
}
