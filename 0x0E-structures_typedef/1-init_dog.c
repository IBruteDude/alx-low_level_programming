#include "dog.h"

/**
 * init_dog - initialise a dog instance's fields
 *
 * @d: the input dog struct
 * @name: the name for the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
