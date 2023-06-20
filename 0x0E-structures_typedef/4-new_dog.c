#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
 */

int _strlen(const char *str)
{
int length = 0;

while (*str++)
length++;
return (length);
}
