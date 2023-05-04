#include "lists.h"

/**
 * add_nodeint - add a node to the front of a list
 * @head: address of the head of the list
 * @n: integer of the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	if (head == NULL)
		return (NULL);
	h = malloc(sizeof(listint_t));
	if (h != NULL)
	{
		h->n = n;
		h->next = *head;
		*head = h;
	}
	return (h);
}