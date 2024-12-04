#include <stdlib.h>
#include <string.h>
#include "lists.h"
unsigned int _strlen(char *str);


/**
 * add_node - Adds a new node to the beggining of a sll
 * @head: pointer to the pointer that is the head of the sll
 * @str: The string that will go in the sll
 * Return: a pointer to the head of the sll
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);
	new->next = *head;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (0);
	}
	new->len = _strlen(new->str);

	*head = new;

	return(*head);
}

/**
 * _strlen - Gets the length of a str
 * @str: String to analyze
 * Return:length of the str
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	if (!str)
		return (0);

	for (len = 0; str[len]; len++)
		continue;

	return (len);
}

