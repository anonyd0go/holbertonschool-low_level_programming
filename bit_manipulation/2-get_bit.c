#include "main.h"

/**
 * get_bit - gets the value of an bit in a given index
 * @n: Unsigned int
 * @index: index to find the bit
 * Return: bit at the desired index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
