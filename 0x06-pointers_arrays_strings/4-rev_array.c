#include "main.h"

/**
 * reverses the content of an array of integers
 * @a: int array pointer
 * @n: int number of element to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	i = 0;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
