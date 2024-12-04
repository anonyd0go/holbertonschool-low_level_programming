#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Gets the number of nodes in a dll
 * @h: Head of the dll
 * Return: Number of nodes in the dll
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p = h;

	while (p)
	{
		i++;
		p = p->next;
	}

	return (i);
}
