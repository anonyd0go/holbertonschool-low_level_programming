#include "dog.h"

/**
 * init_dog - Initialize a var of type struct dog
 * @d: Ptr to struct dog var
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
