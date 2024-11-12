#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates and checks memory
 * @b: Size of desired memory allocation
 * Return: void pointer to allocated memory or 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
