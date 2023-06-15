#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		if (idx == index)
			break;
		node = node->next;
		idx++;
	}
	return (node);
}
