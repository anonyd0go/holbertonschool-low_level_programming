#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of main func
 * @argc: Arg count
 * @argv: Arg vector
 * Return: 0 if succesfull, 1 or 2 otherwise
 */
int main(int argc, char * argv[])
{
	int i, bytes;
	unsigned char *ln;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ln = (unsigned char *)main;
	if (bytes > 0)
	{
		for (i = 0; i < bytes - 1; i++)
			printf("%002hhx ", ln[i]);
	}
	printf("\n");
	return (0);
}
