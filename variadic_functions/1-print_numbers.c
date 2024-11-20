#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints n ammount of numbers
 * @separator: Str that will print between the numbers
 * @n: Amount of ints passed to the function
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(lst, n);
	printf("%i", va_arg(lst, int));
	for (i = 1; i < n; i++)
	{
		if (separator)
			printf("%s", separator);
		printf("%i", va_arg(lst, int));
	}
	printf("\n");
	va_end(lst);
}
