#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs mom or dad
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	dog_t *perro;

	if (name == 0 || owner == 0)
	{
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t));
	perro = doggo;
	if (doggo == NULL)
	{
		return (NULL);
	}
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (perro);
}
