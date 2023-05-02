#include "lists.h"
/**
 * listint_len - returns the length of an int list
 * @h: input list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
		h = h->next, i++;
	return (i);
}
