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
		d->name = (name != NULL) ? malloc(strlen(name) + 1) : NULL;
		if (d->name == NULL && name != NULL)
		{
			free(d);
			return (NULL);
		}
		strcpy(d->name, name);
		d->age = age;
		d->owner = (owner != NULL) ? malloc(strlen(owner) + 1) : NULL;
		if (d->owner == NULL && owner != NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		strcpy(d->owner, owner);
	}
	return (d);
}
