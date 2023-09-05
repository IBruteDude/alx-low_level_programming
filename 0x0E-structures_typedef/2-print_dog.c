#include "dog.h"

/**
 * print_dog - prints the fields of a dog_t
 *
 * @d: input dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		d->name, d->age, d->owner);
	}
}
