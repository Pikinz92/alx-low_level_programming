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
_putchar(k);
return (j);
}
