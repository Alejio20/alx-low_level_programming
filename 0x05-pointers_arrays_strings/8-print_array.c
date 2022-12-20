#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * followed by a new line
 * @a: int pointer
 * @n: int parameter
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d ", a[i]);
	}

	printf("\n");
}
