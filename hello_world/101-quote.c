#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a string using putchar
 * Return: Always returns 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int size_str = sizeof(str);

	write(1, str, size_str);

	return (1);
}
