#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints second half of a string
 * @str: char pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	printf("%i", i);

	for (j = (i / 2) + 1; j >= i; j++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
