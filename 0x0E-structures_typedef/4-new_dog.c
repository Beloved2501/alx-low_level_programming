#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to create a new dog
 * @name: Pointer to the name string of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner string of the dog
 * Return: Return pointer to the newly dog created, else NULL
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int Name, Owner, j;
	dog_t *NewDog;

	NewDog = (dog_t *)malloc(sizeof(dog_t));
	if (NewDog == NULL)
		return (NULL);
	Name = Owner = 0;
	while (name[Name++])
		;
	while (owner[Owner++])
		;
	NewDog->name = malloc(Name * sizeof(NewDog->name));
	if (NewDog->name == NULL)
	{
		free(NewDog);
		return (NULL);
	}
	for (j = 0; j <= Name; j++)
		NewDog->name[j] = name[j];
	NewDog->age = age;
	NewDog->owner = malloc(Owner * sizeof(NewDog->owner));
	if (NewDog->owner == NULL)
	{
		free(NewDog->name);
		free(NewDog);
		return (NULL);
	}
	for (j = 0; j <= Owner; j++)
		NewDog->owner[j] = owner[j];
	return (NewDog);
}
