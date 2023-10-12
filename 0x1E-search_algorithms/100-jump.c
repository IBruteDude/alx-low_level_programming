#include "search_algos.h"
/**
 * jump_search - searchs through an input array by sqrt(size) step jumps
 *
 * @array: input array
 * @size: input array size
 * @value: value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, max_idx, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
	max_idx = (i <= size - 1) ? i : size - 1;
	for (i -= step; i <= max_idx; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
