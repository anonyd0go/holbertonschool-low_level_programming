#include "main.h"

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
		while (j < 4)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');

					l++;
				}

				k++;
			}

			j++;
		}
		i++;
	}
}
