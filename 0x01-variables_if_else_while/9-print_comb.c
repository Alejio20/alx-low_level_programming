#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * separated by a comma followed by a space in ascending order
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
