#include <stdio.h>
#include <stdlib.h>
void prnt_num(int n);

/**
 * main - Prints al possible combunations of two digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i < 10)
				putchar('0');
			prnt_num(i);
			putchar(' ');
			if (j < 10)
				putchar('0');
			prnt_num(j);

			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}
	return (0);
}


/**
 * prnt_num - prints a number using putchar recursively
 * @n: Number to be printed
 * Return: Void
 */
void prnt_num(int n)
{
	if (n / 10)
		prnt_num(n / 10);

	putchar('0' + (n % 10));
}
