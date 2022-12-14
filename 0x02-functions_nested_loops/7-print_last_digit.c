#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer argument
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
	}

	if (x < 0)
	{
		x = -x
	}

	x = n % 10;

	_putchar(x + '0');

	return (x);
}
