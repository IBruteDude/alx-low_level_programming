#include "lists.h"
/**
 * free_list - deallocate all memory reserved for members of a list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head);
	}
}
