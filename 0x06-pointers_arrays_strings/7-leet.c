#include "main.h"

/**
 * leet - encodes a string into 1337
 * letter a and A should be replaced by 4
 * letter e and E should be replced by 3
 * letter o and O should be replaced by 0
 * letter t and T should be replaced by 7
 * letter l and L should  be replaced by 1
 * @a: string pointer
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	int x[] = {65, 69, 79, 84, 76}
	int y[] = {97, 101, 111, 116, 108}
	int z[] = {52, 51, 48, 55, 49}

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == x[j] || s[i] == z[j])
			{
				s[i] = z[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
