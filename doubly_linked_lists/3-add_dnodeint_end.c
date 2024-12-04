#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dll
 * @head: head of the dll
 * @n: number that will go inside the node
 * Return: address of the new element, NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *p = *head;

	if (new == NULL)
		return (0);

	new->n = n;
	new->prev = p;
	new->next = NULL;

	if (p == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}

	return (new);
}
