#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	while (size--)
		arr[size] = c;
	return (arr);
}
