#include "main.h"

/**
 * print_last_digit - check for alphabet
 *
 *@i:  this is the argument
 *
 *Return: bringing result
 *
 */
int print_last_digit(int i);
int print_last_digit(int i)
{
int j;
int k;
j = (i % 10);
k = (48 + j);
if (i >= 0)
{
_putchar(k);
return (j);
}
else
{
int l = (48 + (j * (-1)));
_putchar(l);
return ((j * (-1)));
}
}
