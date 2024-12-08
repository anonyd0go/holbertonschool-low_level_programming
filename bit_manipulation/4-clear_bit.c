#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at index
 * @n: Unsigned int
 * @index: Index where the bit wil be changed
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	set <<= index;
	*n &= ~set;
	return (1);
}
