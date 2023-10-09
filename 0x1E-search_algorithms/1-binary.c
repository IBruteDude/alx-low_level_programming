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
