#include "main.h"

/**
 * puts2 - prints every other char on a str
 * @str: string to be printed
 * Return: Void
 */
void puts2(char *str)
{
	char *prn;

	for (prn = str; *prn != '\0' || *(prn + 1) != '\0'; prn++)
	{
		_putchar(*prn);
		prn++;
	}
	_putchar('\n');
}
