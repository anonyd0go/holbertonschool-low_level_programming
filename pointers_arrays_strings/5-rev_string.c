#include "main.h"

/**
 * rev_string - Reverses a str
 * @s: str to be reversed
 * Return: Void
 */
void rev_string(char *s)
{
	char *sp = s;
	char *st;
	char tmp;

	while (*sp != '\0')
		sp++;

	sp -= 1;

	for (st = s; st != sp; st++, sp--)
	{
		tmp = *st;
		*st = *sp;
		*sp = tmp;
	}
}
