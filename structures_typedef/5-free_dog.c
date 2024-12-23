#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
