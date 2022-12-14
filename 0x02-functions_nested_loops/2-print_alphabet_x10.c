#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase followed
 * by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		i++;
		_putchar('\n');
	}
}
