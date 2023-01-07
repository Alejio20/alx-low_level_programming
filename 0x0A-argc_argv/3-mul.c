#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: string array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
