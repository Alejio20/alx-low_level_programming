#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string pointer
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			s[i] -= 32;
		i++;
	}
	return (str);
}
