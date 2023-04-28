#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a node to the back of a list
 * @head: address of the head of the list
 * @str: string of the new node
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;

	if (head == NULL)
		return (NULL);
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = malloc(sizeof(list_t));
		h = h->next;
	}
	else
	{
		h = malloc(sizeof(list_t));
		*head = h;
	}
	if (h != NULL)
	{
		if (str != NULL)
			h->str = strdup(str), h->len = strlen(str);
		else
			h->str = NULL, h->len = 0;
		h->next = NULL;
	}
	return (h);
}
