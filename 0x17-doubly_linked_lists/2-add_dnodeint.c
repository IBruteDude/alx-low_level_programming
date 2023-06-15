#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	(*head)->prev = node;
	(*head) = node;
	return (node);
}
