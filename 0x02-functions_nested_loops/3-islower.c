#include "main.h"

/**
 * islower - checks for lowercase charater
 *
 * Return: 1 (if c is lowercase)
 * 0 (if c is not lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
