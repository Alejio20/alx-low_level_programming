#include <stdio.h>

/**
 * main - prints all single difgit numbers of base 10
 * starting from 0 folloed by a new line
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
