#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the minimum number of coins needed to make change
 * @argc: Argument count, must be 2
 * @argv: Argument vector
 * Return: 0 if succesful, 1 if more than 2 argcs
 */
int main(int argc, char *argv[])
{
	int change = 0, max, i;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2 || !atoi(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	max = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (coins[i] <= max)
		{
			max -= coins[i];
			change++;
		}
	}

	printf("%d\n", change);
	return (0);
}
