#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string destination pointer
 * @src: string source pointer
 * @n: number of charater to copy
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/**
	 * write additional null buytes to dest to ensure
	 * total n bytes are written, if src length < n
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
