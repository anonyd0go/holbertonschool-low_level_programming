#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Determines the last digit of a random number
 * Return: Always 0
 */
int main(void)
{
	int n;
	int lst_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst_d = n % 10;
	printf("The last digit of %i is %i ", n, lst_d);
	if (lst_d > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lst_d == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
