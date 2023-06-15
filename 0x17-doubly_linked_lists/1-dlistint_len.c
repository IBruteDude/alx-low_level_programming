#include "lists.h"
/**
 * dlistint_len - find the length doubly linked list
 *
 * @h: input list head
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
		h = h->next, len++;
	return (len);
}
