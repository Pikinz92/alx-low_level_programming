#include"main.h"

/**
 *_puts - strings printout in stdout
 *
 *@str: as parameter
 *
 */

void _puts(char *str);
void _puts(char *str)
{
int i = 0;
int j = 0;
while (*(str + i) != '\0')
{i++; }
for (j = 0; j <= i; j++)
{
_putchar (*(str + j));
}
_putchar ('\n');
}
