#include "main.h"

/**
 * puts_half - Prints the second half of the str
 * @str: String to prnt
 * Return: Void
 */
void puts_half(char *str)
{
	int ln, mid;
	char *vis = str;

	for (ln = 0; *(vis + ln) != '\0'; ln++)
	{}

	if (ln % 2)
		mid = (ln / 2) + 1;
	else
		mid = ln / 2;

	for (vis = str + mid; vis < str + ln; vis++)
	{
		_putchar(*vis);
	}
	_putchar('\n');
}
