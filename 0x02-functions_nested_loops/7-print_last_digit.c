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
j = (i % 10);
_putchar(j);
return (j);
}
