#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: struct to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
		{
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		}
		else if (!d->age)
		{
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		}
		else if (!d->owner)
		{
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
