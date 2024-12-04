#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node at desired index
 * @head: Head of the dll
 * @index: Index to get the desired node
 * Return: Address of the desired node, NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *p = head;


	for (i = 0; i < index; i++)
	{
		if (p == NULL)
			return (0);

		p = p->next;
	}
	return (p);
}
