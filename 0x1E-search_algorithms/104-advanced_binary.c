#include "search_algos.h"
/**
 * binary_search - searchs through an input array logarithmically
 *
 * @array: input array
 * @value: value to search for
 * @start: the starting index for search
 * @end: the ending index for search
 * Return: the index of the value if found, -1 otherwise
 */
int __binary_search(int *array, int value, size_t start, size_t end)
{
	size_t i, mid = (end + start) / 2;

	if (start > end)
		return (-1);
	printf("Searching in array: %d", array[start]);
	for (i = start + 1; i <= end; i++)
		printf(", %d", array[i]);
	printf("\n");
	if (array[mid] < value)
		return (__binary_search(array, value, mid + 1, end));
	if (array[mid] > value)
		return (__binary_search(array, value, start, mid - 1));
	/* a little gpt help */
	if (mid == start || array[mid - 1] != value)
		return (mid);
	return __binary_search(array, value, start, mid);
}
/**
 * advanced_binary - searchs through an input array logarithmically
 *
 * @array: input array
 * @size: input array size
 * @value: value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (__binary_search(array, value, 0, size - 1));
}
