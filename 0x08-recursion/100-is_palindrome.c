#include "main.h"

/**
 * is_paldindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */

char *rev_str(char *str)
{
	char *rev_s;
	int i;

	i = 0;
	if (*str != '\0')
	{
		rev_str(str + 1);
		rev_s[i] = *str;
		i++;
	}

	return (rev_s);
}

int is_palindrome(char *s)
{
	char *rev_s = rev_str(s);

	if (*s == *rev_s)
		return (1);
	else
		return (0);
}
