#include "main.h"

/**
 * _abs - check for alphabet
 *
 *@i:  this is the argument
 *
 *Return: bringing result
 *
 */
int _abs(int i);
int _abs(int i)
{
int result;
if (i < 0)
{
result  = i * (-1);
return (result);
}
else
{
result = i;
return (result);
}
}
