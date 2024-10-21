#include <stdio.h>

/**
 * main - Prints a string using putchar
 * Return: Always returns 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;
	int len_str = sizeof(str);

	for (i = 0; i < len_str; i++)
	{
		putchar(str[i]);
	}

	return (1);
}
