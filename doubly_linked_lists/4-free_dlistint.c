#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: Head of the dll
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *ntmp;

	tmp = head;
	while (tmp != NULL)
	{
		ntmp = tmp->next;
		free(tmp);
		tmp = ntmp;
	}
}
