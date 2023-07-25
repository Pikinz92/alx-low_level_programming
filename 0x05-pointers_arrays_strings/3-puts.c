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
for (; *str != '\0'; str++)
{
_putchar (*str);
}
_putchar ('\n');
}
