#include "main.h"

/**
 * print_alphabet_x10 - this print the alphabet X10
 *
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
int i = 0;
int j = 0;
char c[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{ _putchar(c[j]);
}
_putchar('\n');
}
}
