#include "main.h"
#include "string.h"
#include "stdio.h"

/**
*print_rev - A functions that prints a string, in reverse.
*@s: Take a pointer to char as a parameter.
*/

void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
