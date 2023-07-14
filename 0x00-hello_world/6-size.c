#include <stdio.h>

/**
 * main - code starts here
 *
 * Return: 0 is succes
 */

int main(void)
{
printf("size of a char: %zu byte(s)\n", sizeof(char));
printf("size of int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
