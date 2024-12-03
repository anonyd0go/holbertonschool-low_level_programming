#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees every element of a sll form memory
 * @head: Start of the sll
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *tmp, *ntmp;

	tmp = head;
	while (tmp != NULL)
	{
		ntmp = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = ntmp;
	}
}
