#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: Unsigned int
 * @index: index where to change the bit
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	set <<= index;
	*n |= set;
	return (1);
}
