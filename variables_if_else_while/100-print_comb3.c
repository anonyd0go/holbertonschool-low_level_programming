#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints every possible combination of two digits once
 * Return: Always 0
 */
int main(void)
{
	int first;
	int scnd = '0';

	for (first = '0' ; first <= '9' ; first++)
	{

		while (scnd <= '9')
		{
			if (first == scnd)
			{
				scnd++;
				continue;
			}

			putchar(first);
			putchar(scnd);
			if (first == '8' && scnd == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			scnd++;
		}

		scnd = first + 1;
	}
	putchar('\n');
	return (0);
}
