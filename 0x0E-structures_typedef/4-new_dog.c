#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: A new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;

	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
		return (NULL);

	dog_1->name = name;
	dog_1->age = age;
	dog_1->owner = owner;
}
