#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while (node != NULL)
	{
		if (index == i)
		{
			(node->next)->prev = node->prev;
			(node->prev)->next = node->next;
			free(node);
			return (1);
		}
		node = node->next;
		++i;
	}
	return (-1);
}
