#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded) followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, count;

	count = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			count += i;
		}
	}
	printf("%d\n", count);

	return (0);
}
