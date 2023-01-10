#include <stdlib.h>
#include <string.h>
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
	int i, j, k;
	char *concat;

	concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (concat == NULL)
		return (NULL);

	if (s1 == NULL)
		*s1 = '\0';
	else if (s2 == NULL)
		*s2 = '\0';

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
}
