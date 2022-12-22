#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int array pointer
 * @n: int number of element to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
