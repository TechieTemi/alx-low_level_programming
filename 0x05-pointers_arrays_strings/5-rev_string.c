#include "main.h"
#include "string.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: string is reversed
 */
void rev_string(char *s)
{
int length = 0;
char temp;
int i;
while (s[length] != '\0')
length++;
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}

