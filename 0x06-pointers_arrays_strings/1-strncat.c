#include "main.h"

/**
 * _strncat - concatenates two strings with n bytes
 * @dest: string destination parameter
 * @src: string source parameter
 * @n: int number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
