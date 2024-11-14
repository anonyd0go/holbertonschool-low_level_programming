#include "dog.h"
#include <stdlib.h>
unsigned int _strlen(char *str);
char *_strcpy(char *str, unsigned int ln);

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

	ptr->name = _strcpy(name, _strlen(name));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (0);
	}

	ptr->age = age;

	ptr->owner = _strcpy(owner, _strlen(owner));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		return (0);
	}

	return (ptr);
}


/**
 * _strlen - Finds the length of a str
 * @str: String to analyze
 * Return: length of the str or 0 if empty or NULL
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	if (!str || str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		;
	return (i);
}


/**
 * _strcpy - Copies a str to a new destination
 * @str: String to copy
 * @ln: Length of the string
 * Return: pointer to the copy of the str, NULL otherwise
 */
char *_strcpy(char *str, unsigned int ln)
{
	unsigned int i;
	char *cp;

	cp = malloc((ln + 1) * sizeof(char));
	if (cp == NULL)
		return (0);

	for (i = 0; i < ln; i++)
		cp[i] = str[i];
	cp[ln] = '\0';

	return (cp);
}
