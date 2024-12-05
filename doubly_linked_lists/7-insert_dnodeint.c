#include <stdlib.h>
#include "lists.h"
unsigned int dll_len(dlistint_t **head);

/**
 * insert_dnodeint_at_index - insets a node at a specific index
 * @h: Head of the dll
 * @idx: The index where to insrt the node
 * @n: The contents of the node
 * Return: Address of the new node, NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, len = dll_len(h);
	dlistint_t *p = *h;
	dlistint_t *new;

	if (len < idx)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx - 1; i++, p = p->next)
	{
		if (p == NULL)
			return (NULL);
	}
	if (p->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = p->next;
	new->prev = p;
	p->next->prev = new;
	p->next = new;
	new->n = n;
	return (new);
}

/**
 * dll_len - gets the length of a dll
 * @head: beggining of the dll
 * Return: length of the dll
 */
unsigned int dll_len(dlistint_t **head)
{
	unsigned int i = 0;
	dlistint_t *p = *head;

	while (p != NULL)
	{
		i++;
		p = p->next;
	}

	return (i);
}
