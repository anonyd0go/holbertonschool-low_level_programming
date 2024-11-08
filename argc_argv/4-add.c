#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int check_num_argv(char *num);

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
		if (check_num_argv(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);

}


/**
 * check_num_argv - Checks the numbers given at the cli for correct input
 * @num: Number to analyze
 * Return: 1 if all arguments are positive nums, 0 otherwise
 */
int check_num_argv(char *num)
{
	int i = 0;

	while (*(num + i) != '\0')
	{
		if (*(num + i) < '0' || *(num + i) > '9')
			return (0);

		i++;
	}

	return (1);
}
