#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char
 * @size: size of the array
 * @c: char to initialize the array to
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *) malloc(size * sizeof(char));	
	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	//array[i] = '\0';
	return (array);
}
