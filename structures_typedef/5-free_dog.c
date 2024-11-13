#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory of a created dog
 * @d: ptr to the memory to be freed
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d);
}
