#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog instance's
 *
 * @name: the name for the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = (dog_t *)malloc(sizeof(dog_t));

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}

