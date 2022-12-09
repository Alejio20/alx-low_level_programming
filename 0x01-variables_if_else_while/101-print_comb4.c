#include <stdio.h>

/**
 * main - prints all possible different combinations of three
 * digits separated by comma followed by a space.
 * Three digits muust be different
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				if (x == y && x == z)
				{
					continue;
				}
				else if ((y > x && x > z) || (x > y && z > x) || (y > x && z > x) || (x > y &&  x > z))
				{
					continue;
				}
				else
				{
					putchar(x);
					putchar(y);
					putchar(z);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
