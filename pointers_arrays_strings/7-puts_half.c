#include "main.h"

/**
 * puts_half - Prints the second half of the str
 * @str: String to prnt
 * Return: Void
 */
void puts_half(char *str)
{
	int ln;
	char *vis = str;

	for (ln = 0; *(vis + ln) != '\0'; ln++)
	{}

	for (vis = str + (ln / 2); *vis != '\0'; vis++)
	{
		_putchar(*vis);
	}
	_putchar('\n');
}
