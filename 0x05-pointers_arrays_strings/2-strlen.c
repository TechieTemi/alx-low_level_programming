#include "main.h"
#include "string.h"

/**
*_strlen - A functions that returns the length of a string.
*@s: Take in char s as a paramenter.
*Return: it return int.
*/

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

