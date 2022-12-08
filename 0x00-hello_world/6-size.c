#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char Char;
int Int;
long int Long_Int;
long long int Long_Long_Int;
float Float;

printf("Size of a char: %zu byte(s)\n", sizeof(Char));
printf("Size of an int: %zu byte(s)\n", sizeof(Int));
printf("Size of a long int: %zu byte(s)\n", sizeof(Long_Int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(Long_Long_Int));
printf("Size of a float: %zu byte(s)\n", sizeof(Float));

return (0);

}
