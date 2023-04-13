#include <stdlib.h>
/**
 * _calloc - emmulating stdlib calloc functions
 * @nmemb: number of members of array
 * @size: size of each member
 * Return: NULL if failed, new memory address if successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (NULL);
	size *= nmemb;
	p = malloc(size);
	if (p != NULL)
		while (size--)
			p[size] = 0;
	return (p);
}
