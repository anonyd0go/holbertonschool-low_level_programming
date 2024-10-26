#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci nums
 * Return: always 0
 */
int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	int limit = 48;
	int i;
	unsigned long int fibo;

	printf("%lu, %lu, ", first, second);
	for (i = 0; i < limit; i++)
	{
		fibo = first + second;
		first = second;
		second = fibo;
		if (i < (limit - 1))
			printf("%lu, ", fibo);
		else
			printf("%lu\n", fibo);
	}

	return (0);
}
