#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 - if both string are equal
 * 	   negative - if s1 < s2
 * 	   positive - if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, x;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			x = 0;
		}
		else
		{
			x = s1[i] - s2[i];
			break;
		}

		i++;
	}

	return (x);
}
