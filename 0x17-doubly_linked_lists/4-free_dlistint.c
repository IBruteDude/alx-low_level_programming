#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node != NULL)
	{
		head = head->next;
		free(node);
		node = head;
	}
}
