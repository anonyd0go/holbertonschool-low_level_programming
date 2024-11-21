#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
void print_i(va_list);
void print_c(va_list);
void print_fl(va_list);
void print_s(va_list);

/**
 * print_all - Prints anything based on a format
 * @format: order of how the arguments will be passed
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	tprnt type[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_fl},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list lst;

	va_start(lst, format);
	while (format[i])
	{
		j = 0;
		while (type[j].format != NULL)
		{
			if (*(type[j].format) == format[i])
			{
				type[j].func(lst);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	va_end(lst);
	printf("\n");
}


/**
 * print_i - Prints an int
 * @l: argument list
 * Return: Void
 */
void print_i(va_list l)
{
	printf("%i", va_arg(l, int));
}

/**
 * print_c - Prints a character
 * @l: argument list
 * Return: Void
 */
void print_c(va_list l)
{
	printf("%c", va_arg(l, int));
}

/**
 * print_fl - prints a float
 * @l: argument list
 * Return: Void
 */
void print_fl(va_list l)
{
	printf("%f", va_arg(l, double));
}

/**
 * print_s - prints a str
 * @l: Arg list
 * Return: Void
 */
void print_s(va_list l)
{
	char *s;

	s = va_arg(l, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
