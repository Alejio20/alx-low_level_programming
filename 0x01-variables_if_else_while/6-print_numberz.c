#include <stdio.h>

/**
 * main - prints all single difgit numbers of base 10
 * starting from 0 folloed by a new line
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((char) i);
	}

	putchar('\n');

	return (0);
}
