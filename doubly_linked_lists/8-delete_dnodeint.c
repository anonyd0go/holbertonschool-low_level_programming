#include <stdlib.h>
#include "lists.h"
unsigned int dll_len(dlistint_t *head);


/**
 * delete_dnodeint_at_index - deletes a node at specified index
 * @head: head of the dll
 * @index: Then node we wish to delete
 * Return: 1 if succeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, len = dll_len(*head);
	dlistint_t *p = *head;

	if (p == NULL || len < index)
		return (-1);
	if (index == 0)
	{
		p = p->next;
		free(*head);
		*head = p;
		if (p != NULL)
			p->prev = NULL;
		return (1);
	}
	while (i < index)
	{
		p = p->next;
		if (!p)
			return (-1);
		i++;
	}
	if (index == len - 1)
	{
		p->prev->next = NULL;
		free(p);
		return (1);
	}

	p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);
	return (1);
}


/**
 * dll_len - gets the length of a dll
 * @head: head o f the dll
 * Return: size of the dll
 */
unsigned int dll_len(dlistint_t *head)
{
	unsigned int i = 0;
	dlistint_t *p = head;

	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
