#include <stdio.h>
#include <string.h>

/*#define __FILENAME__ ((strrchr(__FILE__, '/')) ? (strrchr(__FILE__, '/') + 1) : (__FILE__))*/

/**
 * main - prints the name of the file it was compiled from
 * followed by a new line
 * @void
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n",__FILE__);
	return (0);
}
