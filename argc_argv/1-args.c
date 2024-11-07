#include <stdio.h>

/**
 * main - Prints the number of args passed to it
 * @argc: number of arguments
 * @argv: Vector of arguments
 * Retrun: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
