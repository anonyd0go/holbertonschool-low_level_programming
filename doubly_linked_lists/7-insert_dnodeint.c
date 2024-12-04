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
	dlistint_t *p = *h, *tmp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (0);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	for (i = 0; i < idx; i++)
	{
		if (p == NULL)
		{
			free(new);
			return (0);
		}

		p = p->next;
	}

	tmp = p->next;
	new->prev = p;
	new->next = tmp;
	p->next = new;
	tmp->prev = new;
	return (new);
}
