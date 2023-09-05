#include "dog.h"

/**
 * free_dog - free a dog struct
 *
 * @d: the dog pointer to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
