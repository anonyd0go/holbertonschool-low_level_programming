#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints the struct dog
 * @d: Pointer to the dog that will be printed
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
