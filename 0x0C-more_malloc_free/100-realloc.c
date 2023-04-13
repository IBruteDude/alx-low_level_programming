#include <stdlib.h>
/**
 * _realloc - emmulates stdlib realloc
 * @ptr: old address
 * @old_size: old address size
 * @new_size: new address size
 * Return: new address, NULL if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i = 0;
	char *store = ptr, *p = malloc(new_size);

	if (!p)
		return (NULL);
	while (old_size-- && new_size--)
	{
		p[i] = store[i];
		i++;
	}
	free(ptr);
	return (p);
}
