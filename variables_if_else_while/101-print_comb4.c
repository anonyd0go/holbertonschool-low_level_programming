#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints every possible combination of three digits once
 * Return: Always 0
 */
int main(void)
{
	int first;
	int scnd;
	int thrd;

	for (first = '0' ; first <= '9' ; first++)
	{

		for (scnd = first + 1; scnd <= '9' ; scnd++)
		{
			for (thrd = scnd + 1; thrd <= '9' ; thrd++)
			{
				putchar(first);
				putchar(scnd);
				putchar(thrd);
				if (first == '7' && scnd == '8' && thrd == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
