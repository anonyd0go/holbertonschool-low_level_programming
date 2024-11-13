#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a dog struct in memory
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 * Return: Ptr to the created dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (0);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
