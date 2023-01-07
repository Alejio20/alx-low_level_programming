#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: string of argument array
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printargv(argv[0]);
	return (0);
}

void printargv(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		printargv(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
