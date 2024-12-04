#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beggining of the dll
 * @head: Head pf the dll
 * @n: Value the node will hold
 * Return: pointer to the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (0);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (*head);
}
