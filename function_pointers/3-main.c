#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Calculator
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if succesfull, (98,99, 100) if error
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", f(a, b));
	return (0);
}
