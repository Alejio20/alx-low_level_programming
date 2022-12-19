#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char pointer
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i, counter;

	i = 0;
	counter = 0;

	while (*(s + i) != '\0')
	{
		counter += 1;

		i++;
	}

	return counter;
}
