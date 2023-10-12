#include "search_algos.h"

/**
 * jump_list - searchs through an input array by interpolating jumps
 *
 * @list: input array
 * @size: input array size
 * @value: value to search for
 * Return: the index of the value if found, -1 otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *crt_node, *idx_node;
	size_t i, step = sqrt(size);

	if (list == NULL || size == 0)
		return (NULL);
	idx_node = crt_node = list;
	do {
		for (i = 0; i < step; i++)
			if (crt_node->next != NULL)
				crt_node = crt_node->next;
			else
				break;
		if (crt_node->next == NULL)
			break;
		printf("Value checked at index [%ld] = [%d]\n",
			crt_node->index, crt_node->n);
		if (crt_node->n > value)
			break;
		idx_node = crt_node;
	} while (crt_node != NULL);
	printf("Value found between indexes [%ld] and [%ld]\n",
		idx_node->index, crt_node->index);
	crt_node = crt_node->next;
	while (idx_node != crt_node)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			idx_node->index, idx_node->n);
		if (idx_node->n == value)
			return (idx_node);
		idx_node = idx_node->next;
	}
	return (NULL);
}
