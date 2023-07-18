#include "main.h"

/**
 *_islower - check for lowercase
 *
 *@c:  this is the argument
 *
 *Return: 1 for corrct 0 for error
 *
 */

int _islower(int c);

int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
