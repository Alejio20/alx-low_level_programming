#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: string pointer to allocated memory
 */

char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * (strlen(str) + 1));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (*str != '\0')
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
