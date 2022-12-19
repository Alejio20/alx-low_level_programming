#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char pointer
 * Return: length of a string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter += 1;

		*s++;
	}

	return counter;
}
