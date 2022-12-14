#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * separated by comma followed by a space. The two digits must be different
 * Only print the smallest combination of two digits, if the two combinations
 * have the same digits. Also print in ascending order.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, n;

	for (i = 48; i <= 57; i++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (i == n)
			{
				continue;
			}
			else if (i > n)
			{
				continue;
			}
			else
			{
				putchar(i);
				putchar(n);

				if (i != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');

	return (0);
}
