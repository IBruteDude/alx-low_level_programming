#include "lists.h"
/**
 * get_dnodeint_at_index - gets the address of the n'th node in a list
 *
 * @head: input list head
 * @index: the index to get the address of
 * Return: the address of the found node, or NULL if none was found
 */
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
