#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
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
	for (i = 0; i < n - 1; i++)
	{
		stp = strdup(va_arg(lst, char *));
		if (stp)
			printf("%s", stp);
		else
			printf("(nil)");

		if (separator)
			printf("%s", separator);
		free(stp);
	}

	stp = strdup(va_arg(lst, char *));
	if (stp)
		printf("%s", stp);
	else
		printf("(nil)");
	printf("\n");
	free(stp);
}


