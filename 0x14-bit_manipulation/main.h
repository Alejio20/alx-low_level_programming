#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: char pointer
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i, counter;

	i = 0;
	counter = 0;

	while (*(s + i) != '\0')
	{
		counter += 1;

		i++;
	}

	return (counter);
}

/**
 * _atoi - convert a string to an integer
 * @s: char pointer
 * Return: int of converted string
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int parameter
 * @y: int parameter
 * Return: int value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

unsigned int binary_to_uint(const char *b);

#endif /*_MAIN_H_*/
