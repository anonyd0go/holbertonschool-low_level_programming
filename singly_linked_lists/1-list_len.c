#include <stddef.h>
#include "lists.h"

/** 
 * list_len - Gets the length of the singly linked list
 * @h - head of the linked list
 * Return: Number of elements in the sll
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t i = 0;

	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
