#include "lists.h"
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *h;

	if (head != NULL && *head != NULL)
		h = *head, i = h->n, *head = (*head)->next, free(h);
	return (i);
}
