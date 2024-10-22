#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digits in base 10
 * Return: Always 0
 */

int main(void)
{
	int dig = 0;

	while (dig < 10)
	{
		printf("%i", dig);
		dig++;
	}
	printf("\n");
	return (0);
}
