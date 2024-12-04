#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beggining of the dll
 * @head: Head pf the dll
 * @n: Value the node will hold
 * Return: Address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *p = *head;

	if (new == NULL)
		return (0);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (p != NULL)
		p->prev = new;
	p = new;

	return (new);
}
