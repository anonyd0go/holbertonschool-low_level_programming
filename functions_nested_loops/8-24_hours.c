#include "main.h"
void print_clock(int a, int b, int c, int d);

/**
 * jack_bauer - Prints every hour and every minute of the day
 * Return: Void
 */
void jack_bauer(void)
{
	int i = 0;
	int j;
	int k;
	int l;

	while (i < 3)
	{
		j = 0;
		if (i < 2)
		{
			while (j <= 9)
			{
				k = 0;
				while (k < 6)
				{
					l = 0;
					while (l <= 9)
					{
						print_clock(i, j, k, l);
						l++;
					}
					k++;
				}
			j++;
			}
		}
		else
		{
			while (j < 4)
			{
				k = 0;
				while (k < 6)
				{
					l = 0;
					while (l <= 9)
					{
						print_clock(i, j, k, l);
						l++;
					}
				k++;
				}
			j++;
			}
		}
		i++;
	}
}


/**
 * print_clock - The clock based on the input of the num
 * @a: tens of the hour
 * @b: units of hour
 * @c: tens of minutes
 * @d: units of minutes
 * Return: Always void
 */
void print_clock(int a, int b, int c, int d)
{
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(':');
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
}
