#include <stddef.h>
#include "lists.h"

/** list_len - Gets the length of the singly linked list
 * @h - head of the linked list
 * Return: Number of elements in the sll
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t i = 1;

	if (p == NULL)
		return (0);
	else if (p->next == NULL)
		return (1);
	else
	{
		p = p->next;
		return (i + list_len(p));
	}
}
