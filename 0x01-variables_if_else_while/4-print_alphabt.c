#include <stdio.h>

/**
 * main - prints the alpabet in lowercase followed by a new line
 * except letters q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}

		putchar(c);
	}

	putchar('\n');

	return (0);
}
