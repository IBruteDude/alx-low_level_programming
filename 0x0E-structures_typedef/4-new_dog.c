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

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char *name = "Ghost";
	char *owner = "Jon Snow";
	dog_t *my_dog;

	my_dog = new_dog(name, 4.75, owner);
	if (my_dog == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	if (my_dog->name == name || my_dog->owner == owner)
	{
		printf("Duplicated strings should be stored in the allocated structure.\n");
		return (1);
	}
	printf("My name is %s, I am %.2f, and my owner is %s\n",
		my_dog->name, my_dog->age, my_dog->owner);
	return (0);
}
