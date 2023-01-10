#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated memory containing string s1
 * followed by s2 and null termination
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, x, y;
	char *concat;

	x = 0;
	while (s1 != '\0')
		x++;
	y = 0;
	while (s2 != '\0')
		y++;

	concat = malloc(sizeof(char) * (x + y + 1));
	if (concat == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		concat[i] = s1[j];
		i++;
		j++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		concat[i] = s2[k];
		i++;
		k++;
	}

	concat[i] = '\0';

	return (concat);
	free(concat);
}
