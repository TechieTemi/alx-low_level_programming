#include "main.h"

/**
*swap_int - A functtion that swaps the values of two integer.
*@a: First int pointer to be swapped as parameter.
*@b: Second int pointer to be swapped with as parameter.
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
