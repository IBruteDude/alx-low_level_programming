#include "lists.h"

/**
 * list_len - find the length of the list
 * @h: input list head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
		i++, h = h->next;
	return (i);
}
