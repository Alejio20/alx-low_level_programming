#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0, if b is NULL
 * or there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;
	int i, j, len, num, sum;

	if (b == NULL)
		return (0);

	i = 0;

	while (b[i] != NULL)
	{
		if (b[i] != 48 || b[i] != 49)
			return (0);

		i++;
	}

	len = _strlen(b);
	sum = 0;

	for (j = 0; j < len; j++)
	{
		num = _atoi(b[j]) * _pow_recursion(2, len - 1);
		len--;
		sum += num;
	}

	binary = (unsigned int) (sum);

	return (binary);
}
