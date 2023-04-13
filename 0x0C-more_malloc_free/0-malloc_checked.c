#include <stdlib.h>
/**
 * malloc_checked - malloc but exits with code 98 if failed
 * @b: size of memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
