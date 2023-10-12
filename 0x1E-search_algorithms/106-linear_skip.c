#include "search_algos.h"

/**
 * linear_skip - searchs through an input skip list
 *
 * @list: input skip list
 * @value: value to search for
 * Return: the index of the value if found, -1 otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *idx_node = list, *crt_node, *end_node;

	if (list == NULL)
		return (NULL);
	while (idx_node != NULL)
	{
		end_node = idx_node->express;
		if (end_node == NULL)
			break;
		printf("Value checked at index [%ld] = [%d]\n",
			end_node->index, end_node->n);
		if (end_node->n > value)
			break;
		idx_node = end_node;
	}
	if (end_node == NULL)
	{
		crt_node = idx_node;
		while (crt_node->next != NULL)
			crt_node = crt_node->next;
		printf("Value found between indexes [%ld] and [%ld]\n",
			idx_node->index, crt_node->index);
		end_node = crt_node->next;
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
			idx_node->index, end_node->index);
	}
	while (idx_node != end_node)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			idx_node->index, idx_node->n);
		if (idx_node->n == value)
			return (idx_node);
		idx_node = idx_node->next;
	}
	return (NULL);
}
