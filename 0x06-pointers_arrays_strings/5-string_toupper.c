#include "main.h"

/**
 * changes all lowercase letters of a string to uppercase
 * @str: string pointer
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 123 || str[i] > 96)
		{
			str[i] -= 32;
		}

		i++;
	}

	return (str);
}
