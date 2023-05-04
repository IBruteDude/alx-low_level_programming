#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;

	while (index != 0 && h != NULL)
	{
		h = h->next, index--;
	}
	return (h);
}
