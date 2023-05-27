#include "main.h"

/**
*print_most_number - A function that prints the numbers, from 0 to 9, followed by a newline.
*Description: A function that prints numbers from 0 to 9 without printing 2 and 4.
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
