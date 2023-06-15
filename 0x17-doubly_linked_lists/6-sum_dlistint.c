#include "lists.h"
/**
 * sum_dlistint - calculate the sum of all data stored in nodes of a list
 *
 * @head: the input list head
 * Return: the calculated sum
 */
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
