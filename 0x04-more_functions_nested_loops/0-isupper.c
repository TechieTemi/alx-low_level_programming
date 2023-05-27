#include "main.h"
#include "ctype.h"

/**
*_isupper - A function that check for uppercase
*@c: Take in one integer c as parameter
*Return: 1 if it is uppercase and 0 if it is not uppercase.
*/

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
