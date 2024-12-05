#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insets a node at a specific index
 * @h: Head of the dll
 * @idx: The index where to insrt the node
 * @n: The contents of the node
 * Return: Address of the new node, NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *p = *h;
	dlistint_t *new;

	if (idx < 0)
		return (0);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx; i++)
	{
		if (p == NULL)
			return (0);
		p = p->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);
	if (p->next == NULL)
		return (add_dnodeint_end(h, n));

	new->next = p;
	new->prev = p->prev;
	p->prev->next = new;
	p->prev = new;
	new->n = n;
	return (new);
}
