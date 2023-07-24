#include"main.h"

/**
 *swap_int - swaps the value int
 *
 *@a: as parameter
 *
 *@b: as parameter
 *
 */

void swap_int(int *a, int *b);
void swap_int(int *a, int *b)
{
int k = *a;
*a = *b;
*b = k;
}
