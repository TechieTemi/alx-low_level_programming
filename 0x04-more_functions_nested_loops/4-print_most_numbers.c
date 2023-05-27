#include "main.h"

/**
*print_most_number - Prints the numbers, from 0-9(except 2 and 4, 
*followed by a new line.
*Description: This function prints the numbers 0 to 9, excluding 2 and 4,
*	followed by a new line using the _putchar function.
*/

void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if (n == 2 || n == 4)
{
continue;
}
else
{
_putchar(n + '0');
}
}
_putchar('\n');
}
