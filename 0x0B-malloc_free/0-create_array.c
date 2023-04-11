#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *arr = malloc(sizeof(char) * size);

		while (size--)
			arr[size] = c;
		return (arr);
	}
	else
	{
		return (NULL):
	}
}
