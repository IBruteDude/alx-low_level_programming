#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free a dog struct
 *
 * @d: the dog pointer to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
