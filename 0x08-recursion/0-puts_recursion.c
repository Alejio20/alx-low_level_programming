#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	_puts_recursion(s[i + 1]);
}
