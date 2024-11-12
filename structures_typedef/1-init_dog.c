#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: first param
 * @name: second param
 * @age: third param
 * @owner: fourth param
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(98);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
