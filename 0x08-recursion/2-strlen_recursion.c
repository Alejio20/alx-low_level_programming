#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: int of the  length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int i = 0;
		_strlen_recursion(s + 1);
		i++;
	}
	return i;
}
