#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: integer argument
 * Return: Always 0
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
