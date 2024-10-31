#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Gen a random password for 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int lower = 33;
	int upper = 126;
	unsigned int pkln = 11;
	unsigned int i;

	srand(time(NULL));

	for (i = 0; i <= pkln; i++)
	{
		printf("%c", rand() % (upper - lower) + lower);
	}

	return (0);
}
