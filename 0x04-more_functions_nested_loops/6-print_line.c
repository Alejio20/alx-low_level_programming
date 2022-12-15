#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer argument
 * Return: Always 0
 */

void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
