#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;

	if (head == NULL)
		return (NULL);
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = malloc(sizeof(listint_t));
		h = h->next;
	}
	else
	{
		h = malloc(sizeof(listint_t));
		*head = h;
	}
	if (h != NULL)
		h->n = n, h->next = NULL;
	return (h);
}
