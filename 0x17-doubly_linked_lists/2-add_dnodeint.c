#include "lists.h"
/**
 * add_dnodeint - adds a node to the head of a doubly linked list
 *
 * @head: input list head address
 * @n: the number to be stored in the node
 * Return: inserted node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	node->n = n;
	node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = node;
	node->next = *head;
	(*head) = node;
	return (node);
}
