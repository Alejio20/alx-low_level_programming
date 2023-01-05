#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int parameter
 * @y: int parameter
 * Return: int value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 1)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(y - 1));
	}
}
