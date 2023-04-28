#include "lists.h"
#include <string.h>

/**
 * add_node - add a node to the front of a list
 * @head: address of the head of the list
 * @str: string of the new node
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	if (head == NULL)
		return (NULL);
	h = malloc(sizeof(list_t));
	if (h != NULL)
	{
		if (str != NULL)
			h->str = strdup(str), h->len = strlen(str);
		else
			h->str = NULL, h->len = 0;
		h->next = *head;
		*head = h;
	}
	return (h);
}
