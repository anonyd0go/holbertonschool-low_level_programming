#include <stddef.h>
#include "lists.h"

/** 
 * list_len - Gets the length of the singly linked list
 * @h - head of the linked list
 * Return: Number of elements in the sll
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	int i;
	const list_t *p = h;

	for(i = 0; p; i++)
	{
		p = p->next;
		len++;
	}
	return (len);
}
