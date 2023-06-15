#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 *
 * @head: input list head address
 * @n: the number to be stored in the node
 * Return: inserted node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = *head;
	if (node == NULL)
	{
		node = (dlistint_t *)malloc(sizeof(dlistint_t));
		node->n = n;
		node->next = node->prev = NULL;
		*head = node;
		return (node);
	}
	while (node->next != NULL)
		node = node->next;
	node->next = (dlistint_t *)malloc(sizeof(dlistint_t));
	(node->next)->prev = node;
	node = node->next;
	node->next = NULL;
	node->n = n;
	return (node);
}
