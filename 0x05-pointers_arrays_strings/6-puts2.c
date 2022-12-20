#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by a new line
 * @str: char pointer
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	i = 0;

	j += i;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			_putchar(str[j]);
			i++;
		}
	}
	_putchar('\n');
}
