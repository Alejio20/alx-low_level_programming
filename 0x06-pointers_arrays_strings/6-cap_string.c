#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string pointer
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] = '\0')
	{
		if (s[i] == 20 || s[i] == 21 || s[i] == 44 || s[i] == 46 || s[i] == 58 || s[i] == 59 || s[i] = 63 || s[i] == 28 || s[i] == 29 || s[i] == 22 || s[i] == 123 || s[i] == 125 || s[i] == 9)
		{
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] -= 32;
			}
		}
		else
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
			}
		}
		i++;
	}

	return (s);
}