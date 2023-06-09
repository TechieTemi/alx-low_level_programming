#include "stdio.h"
#include "main.h"
#include "string.h"

/**
*puts_half - A function that prints half of a string,
*followed by a new line.
*@str: Take str as a parameter
*/

void puts_half(char *str)
{
int length = strlen(str);   /* The length strin  is calculated using strlen*/
int midpoint;
if (length % 2 == 0)  /*Based on whether the length is even or odd*/
{
midpoint = length / 2;
}
else /* For odd-length strings, it is set to (length + 1) /2*/
{
midpoint = (length + 1) / 2;
}
while (str[midpoint] != '\0')  /*Used to print out ths string*/
{
_putchar(str[midpoint]);
midpoint++;
}
_putchar('\n');
}
