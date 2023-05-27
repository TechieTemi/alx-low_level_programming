#include "main.h"
#include "ctype.h"

/**
*_isdigit - A function that checks if it is a digit, 0 through 9 .
*@c: Takes in integer c as a parameter
*Description:  A program to demonstrate the usage of isdigit function
*Return: 1 if c is a digit and 0 if c is not a digit
*/

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
