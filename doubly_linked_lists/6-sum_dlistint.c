#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - sums all the contents in dlistint
 * @head: Head of the dll
 * Return: the sum of all the contents of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
