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

	va_start(lst, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%i", va_arg(lst, int));
		if (separator)
			printf("%s", separator);
	}

	printf("%i\n", va_arg(lst, int));
	va_end(lst);
}
