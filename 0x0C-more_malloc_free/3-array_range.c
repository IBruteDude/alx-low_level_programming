#include <stdlib.h>
/**
 * array_range - creates a range of values from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the range,  or NULL on failure
 */
int *array_range(int min, int max)
{
	int size = max - min + 1, *p;
	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * size);
	if (!p)
		return (NULL);
	while (min <= max)
		*(p++) = min++;
	p -= size;
	return (p);
}
