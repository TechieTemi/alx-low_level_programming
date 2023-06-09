#include <stdio.h>

/**
*puts2 - A function that print every other character of a s tring,
*starting with the first character.
*@str: The string parameter.
*/
void puts2(char *s);
int main(void) /*Entry point of a code*/
{
char *str;
str = "0123456789";
puts2(str);
return (0);
}
void puts2(char *s)
{
int a;
while (s[a] != '\0')
{
if ((s[a] % 2) == 0)
{
putchar(s[a]);
}
a++;
}
putchar('\n');
}
