#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check for alphabet
 *
 *@n:  this is the argument
 *
 *Return: bringing result
 *
 */

void print_to_98(int n);

void print_to_98(int n)
{
while (n <= 98)
{
printf("%d, ", n);
n++;
}
printf("\n");
return;
}
