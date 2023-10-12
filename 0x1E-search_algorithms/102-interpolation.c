#include "search_algos.h"
/**
 * interpolation_search - searchs through an input array by interpolating jumps
 *
 * @array: input array
 * @size: input array size
 * @value: value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (low != high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	return (-1);
}
