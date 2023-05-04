#include "lists.h"
int pop_listint(listint_t **head)
{
	int i = 0;

	if (head != NULL)
		i = (*head)->n, *head = (*head)->next;
	return (i);
}
