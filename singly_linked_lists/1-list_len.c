#include <stddef.h>
#include "lists.h"

/**
 * list_len - Gets the length of the singly linked list
 * @h: head of the linked list
 * Return: Number of elements in the sll
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *p = h;

	while (p)
	{
		len++;
		p = p->next;
	}
	return (len);
}
