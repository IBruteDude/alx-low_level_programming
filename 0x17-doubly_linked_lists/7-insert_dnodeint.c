#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a specific index in a list
 *
 * @h: the input list head address
 * @idx: the index to insert the node at
 * @n: the value to be stored in the inserted node
 * Return: the address of the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node, *head;

	if (h == NULL)
		return (NULL);
	head = *h;
	if (idx == 0)
	{
		node = (dlistint_t *)malloc(sizeof(dlistint_t));
		node->n = n;
		node->prev = (*h)->prev;
		(*h)->prev = node;
		node->next = *h;
		*h = node;
		return (node);
	}
	while (head != NULL)
	{
		if (idx == i)
		{
			node = (dlistint_t *)malloc(sizeof(dlistint_t));
			node->n = n;
			node->prev = head->prev;
			head->prev = node;
			node->next = head;
			return (node);
		}
		head = head->next;
		++i;
	}
	return (NULL);
}
