#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: dog structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *c = "nil";

	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = c;

	if (d->age == NULL)
		d->age = c;

	if (d->owner == NULL)
		d->owner = c;

	printf("Name: ", d->name);
	printf("Age: ", d->age);
	printf("Owner: ", d->owner);
}
