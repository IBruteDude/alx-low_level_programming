#include "dog.h"

/**
 * new_dog - create a new dog instance's
 *
 * @name: the name for the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = (dog_t *)malloc(sizeof(dog_t));

	if (d != NULL)
	{
		d->name = strdup(name);
		d->age = age;
		d->owner = strdup(owner);
		if (d->name == NULL)
			free(d->owner), free(d);
		if (d->owner == NULL)
			free(d->name), free(d);
	}
	return (d);
}

