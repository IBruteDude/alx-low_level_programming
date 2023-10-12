#include "search_algos.h"
/**
 * binary_search - searchs through an input array logarithmically
 *
 * @array: input array
 * @size: input array size
 * @value: value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, start = 0, end = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (start <= end)
	{
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= end; i++)
			printf(", %d", array[i]);
		printf("\n");
		mid = (end + start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searchs for a suitable searching range expoentially
 *
 * @array: input array
 * @size: input array size
 * @value: value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int found_idx;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		bound >> 1,  bound - 1);

	found_idx = binary_search(
		array + (bound >> 1),
		(bound + 1 <= size) ? (bound >> 1) + 1 : (size - (bound >> 1)),
		value
	);
	if (found_idx == -1)
		return (-1);
	return ((bound >> 1) + found_idx);
}
