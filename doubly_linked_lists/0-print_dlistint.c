#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dll
 * @h: head of the dll
 * Return: Number of nodes in the dll
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p = h;

	while (p)
	{
		printf("%d\n", p->n);
		i++;
		p = p->next;
	}

	return (i);
}
