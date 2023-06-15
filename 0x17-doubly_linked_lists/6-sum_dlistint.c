#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
	int aggregate = 0;

	while (head != NULL)
	{
		aggregate += head->n;
		head = head->next;
	}
	return (aggregate);
}
