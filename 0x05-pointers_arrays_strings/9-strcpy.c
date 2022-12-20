#include "main.h"

/**
 * _strcpy - cpoies the string pointed to by src
 * including the terminating null byte
 * to the buffer pointer to by dest
 * @dest: char pointer
 * @src: char pointer
 * Return: char value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
