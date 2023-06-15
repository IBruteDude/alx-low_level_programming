#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 *
 * @h: input list head
 * Return: length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
		printf("%i\n", h->n), h = h->next, len++;
	return (len);
}
