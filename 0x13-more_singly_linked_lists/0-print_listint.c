#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the contents of a list of integers
 * @h: input list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
		printf("%d\n", h->n), h = h->next, i++;
	return (i);
}
