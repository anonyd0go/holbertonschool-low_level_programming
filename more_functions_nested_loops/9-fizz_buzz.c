#include "main.h"
#include <stdio.h>

/**
 * main - Prints nums 1 to 100, and Fizz Buzz on mults of 3 and 5
 * Return: always 0
 */
int main(void)
{
	int limit = 100;
	int i;

	for (i = 1; i <= limit; i++)
	{
		if ((i % 3 == 0) && (i % 5 ==0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < limit - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
