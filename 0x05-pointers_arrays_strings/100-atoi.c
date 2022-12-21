#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: char pointer
 * Return: int of converted string
 */

int _atoi(char *s)
{
	int i, n, sign;

	n = 0;
	sign = 1;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			n *= 10 + (s[i] - 48);
		}
		else if (s[i] == 45)
		{
			sign *= -1;
		}
		else if (n > 0)
		{
			break;
		}
		i++;
	}

	return (sign * n);
}
