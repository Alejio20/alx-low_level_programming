#include "main.h"

/**
 * _isalpha - checks for lowercase and uppercase alphabetic character
 * @c: integer argument
 * Return: 1 (if c is an alphabet), 0 (Otherwise)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
