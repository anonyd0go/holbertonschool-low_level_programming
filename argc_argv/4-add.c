#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the sum of positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if sum is succesfull and all arguments are digits, else 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			exit(1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);

}
