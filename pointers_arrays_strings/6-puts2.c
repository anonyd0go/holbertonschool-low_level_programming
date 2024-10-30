#include "main.h"

/**
 * puts2 - prints every other char on a str
 * @str: string to be printed
 * Return: Void
 */
void puts2(char *str)
{
	char *prn;
	char *end = str;

	while (*end != '\0')
		end++;

	for (prn = str; prn <= end; prn++)
	{
		_putchar(*prn);
		prn++;
	}
	_putchar('\n');
}
