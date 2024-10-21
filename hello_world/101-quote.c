#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a string using putchar
 * Return: Always returns 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	/*int size_s = sizeof(s);*/

	write(2, s, 59);

	return (1);
}
