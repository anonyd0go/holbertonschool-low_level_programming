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
	char passkey[pkln];

	srand(time(NULL));

	for (i = 0; i <= pkln; i++)
	{
		passkey[i] = rand() % (upper - lower) + lower;
	}

	printf("%s", passkey);

	return (0);
}
