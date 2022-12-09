#include <hstdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, n;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
