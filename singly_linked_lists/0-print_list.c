#include <stddef.h>
#include "lists.h"
#include <stdio.h>


/**
 * print_list - prints all the elements of a list
 * @h: head of the linked list
 * Return: Number of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *p = h;

	while (p)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);

		p = p->next;
		i++;
	}

	return (i);
}
