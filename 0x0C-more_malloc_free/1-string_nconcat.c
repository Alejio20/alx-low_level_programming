#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer shall point to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l_s1, l_s2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l_s1 = 0;
	while (s1[l_s1] != '\0')
		l_s1++;

	l_s2 = 0;
	while (s2[l_s2] != '\0')
		l_s2++;

	if (n >= l_s2)
		n = l_s2;

	str = malloc(sizeof(char) * (l_s1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
