#include <stdlib.h>
#include <string.h>
#include "lists.h"

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
	new->len = 0;
	while (new->str[new->len])
		new->len++;

	*head = new;

	return(*head);
}
