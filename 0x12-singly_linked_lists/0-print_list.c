#include "lists.h"
/**
 * print_list - prints the elements of a list of nodes
 * @h: input list head
 * Return: number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s", h->len, h->str);
		else
			printf("[0] (nil)");
		h = h->next;
		i++;
	}
	return (i);
}
