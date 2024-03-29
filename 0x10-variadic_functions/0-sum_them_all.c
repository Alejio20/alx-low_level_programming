#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: positive int of the the number of parameters
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
