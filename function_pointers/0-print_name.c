#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: function to print the name
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
