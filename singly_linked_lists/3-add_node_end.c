#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: beggining og the sll
 * @str: Content of the node
 * Return: Head of the sll
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);
	new->next = NULL;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (0);
	}
	new->len = 0;
	while (new->str[new->len])
		new->len++;

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else
		*head = new;

	return (*head);
}
