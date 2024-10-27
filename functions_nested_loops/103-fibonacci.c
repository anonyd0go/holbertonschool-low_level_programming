#include <stdio.h>

/**
 * main - Prints the sum of the even fibonacci terms
 * Return: always 0
 */
int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int limit = 4000000;
	unsigned long int even_num_sum = 2;
	unsigned long int fibo = 0;

	while (fibo <= limit)
	{
		fibo = first + second;
		first = second;
		second = fibo;

		if ((fibo % 2) == 0)
			even_num_sum += fibo;
	}

	printf("%lu\n", even_num_sum);

	return (0);
}
