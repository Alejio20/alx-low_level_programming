#include <unistd.h>

/**
 * a-putchar - writes the character c to standard output
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
