#include "main.h"

/**
 * _atoi - searches a str for an int and returns it
 * @s: string to be parsed
 * Return: int inside the str
 */
int _atoi(char *s)
{
	int num = 0;
	int neg = 1;
	char *sp;

	for (sp = s; (*sp < '0' || *sp > '9') && *sp != '\0'; sp++)
	{
		if (*sp == '-')
			neg *= -1;
	}

	while (*sp >= '0' && *sp <= '9')
	{
		num = num * 10 + neg * (*sp - '0');
		sp++;
	}

	return (num);
}
