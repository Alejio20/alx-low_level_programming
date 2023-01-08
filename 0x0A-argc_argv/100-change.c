#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money. Let pennies represent 1 cent coins,
 * longacres represent 2 cent coins, nickels represent 5 cent coins,
 * dimes represent 10 cent coins, quarters represent 25 cent coins.
 * @argc: argument count
 * @argv: string array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int change, quarters, dimes, nickels, longacres, pennies;

	if ((argc == 1) || (argc > 2))
	{
		printf("Error\n");
		return (1);
	}
	if (cents <= 0)
	{
		printf("0\n");
		return (-1);
	}
	quarters = cents / 25;
	cents -= quarters * 25;
	dimes = cents / 10;
	cents -= dimes * 10;
	nickels = cents / 5;
	cents -= nickels * 5;
	longacres = cents / 2;
	cents -= longacres * 2;
	pennies = cents / 1;
	cents -= pennies * 1;
	change = quarters + dimes + nickels + longacres + pennies;
	printf("%d\n", change);
	return (0);
}
