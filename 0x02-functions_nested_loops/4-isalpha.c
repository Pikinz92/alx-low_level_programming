#include "main.h"

/**
 *_isalpha - check for alphabet
 *
 *@c:  this is the argument
 *
 *Return: 1 for corrct 0 for error
 *
 */
int _isalpha(int c);
int _isalpha(int c)
{
if ((c > 64 && c < 123) &&
!(c == 91 || c == 92 || c == 93 || c == 94 || c == 95 || c == 96))
{
return (1);
}
else
{
return (0);
}
}
