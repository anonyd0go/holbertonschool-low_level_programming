#include <stdio.h>

/**
 * main - Prints the sum of the numbers that are multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int target = 1024;
	int i;

	for (i = 0; i < target; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
