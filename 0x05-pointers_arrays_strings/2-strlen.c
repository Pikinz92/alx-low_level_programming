#include"main.h"

/**
 *_strlen - strings lenght calculator
 *
 *@s: as parameter
 *
 * Return: returns lenght of string
 */

int _strlen(char *s);
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{i++; }
return (i);
}
