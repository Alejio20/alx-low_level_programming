#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char pointer to the string
 * @c: char parameter to locate
 * Return: pointer to the first occurence of c in string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		return ('\0');
		s++;
	}
}
