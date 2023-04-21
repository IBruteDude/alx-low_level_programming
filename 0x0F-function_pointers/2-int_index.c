/**
 * int_index - return the index of the first int that fulfills a condition
 * @array: input searching array
 * @size: array size
 * @cmp: condition function
 * Return: index if found, -1 if none is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			break;
	return ((i < size) ? i : -1);
}
