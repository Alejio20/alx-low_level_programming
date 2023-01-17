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

	if (d->owner == NULL)
		d->owner = c;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
