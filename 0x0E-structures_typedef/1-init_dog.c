#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: element pointing to the type of dog
 * @name: pointer to the name string of the dog
 * @age: Age of the dog
 * @owner: pointer to the owner string of the dog
 * Return: Return void
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
