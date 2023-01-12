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
	while (*str != '\0')
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
	int i;
	int flag;

	flag = 0;
	i = 0;
	while (s[i] != '\0' && rev_s[i] != '\0')
	{
		if (s[i] == rev_s[i])
			flag = 1;
		
		else
		{
			flag = 0;
			break;
		}
	}

	if (flag == 1)
		return (flag);
	else
		return (flag);
}
