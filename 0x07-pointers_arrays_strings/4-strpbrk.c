#include "main.h"

/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: string pointer
 * @accept: string pointer to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k;

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
				return (s + i);
			}
			j++;
		}
		if (k == 1)
			break;
		i++;
	}
	return ('\0');
}
