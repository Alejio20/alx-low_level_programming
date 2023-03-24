#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string pointer
 * @accept: string pointer to the prefix substring
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 1;
				break;
			}
			j++;
		}
		if (k == 0)
			break;
		i++;
	}
	return (i);
}
