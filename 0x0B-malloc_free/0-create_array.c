#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: array size
 * @c: initialization character
 * Return: address of the array if successful, NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	if (size)
	{
		char *arr = malloc(sizeof(char) * size);

		while (size--)
			arr[size] = c;
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
