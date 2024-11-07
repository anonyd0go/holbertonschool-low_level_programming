#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of a multiplication
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if recieved necesary arguments, else 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
