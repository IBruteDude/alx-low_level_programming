#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	if (head == NULL)
		return (NULL);
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = malloc(sizeof(list_t));

}
