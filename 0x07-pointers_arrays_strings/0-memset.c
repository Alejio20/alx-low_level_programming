#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: char pointer to the block of memory to fill
 * @b: char parameter to fill s
 * @n: unsigned int parameter for the number of bytes to be filled
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	
	return (s);
}
