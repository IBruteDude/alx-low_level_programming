#include <stddef.h>
/**
 * array_iterator - iterate over array elements to apply a function
 * @array: input array
 * @size: array size
 * @action: applied function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	typeof(size) i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
