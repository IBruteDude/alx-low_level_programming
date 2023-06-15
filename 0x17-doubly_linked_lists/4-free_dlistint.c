#include "lists.h"
/**
 * free_dlistint - frees all nodes of a doubly linked list
 *
 * @head: input list head
 */
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
