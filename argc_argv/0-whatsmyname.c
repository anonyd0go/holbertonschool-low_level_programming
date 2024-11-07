#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Argument count
 * @argv: arguments passed to the function
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
