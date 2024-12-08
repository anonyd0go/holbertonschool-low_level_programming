#include "main.h"

/**
 * flip_bits - Gets num of bits needed to be fliped
 * @n: unsigned int
 * @m: unsigned int to get to
 * Return: number of bits needed to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long check;
	int i = 0;

	check = n ^ m;
	while (check >= 1)
	{
		if ((check & 1) == 1)
			i++;
		check >>= 1;
	}
	return (i);
}
