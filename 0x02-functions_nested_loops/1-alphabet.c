#include "main.h"
/**
 * print_alphabet - prints lowercased aphalbets
 *
 */

void print_alphabet(void);
void print_alphabet(void)
{
char aphbet[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
for (i = 0; i < 26; i++)
{
_putchar(aphbet[i]);
}
_putchar('\n');
}
