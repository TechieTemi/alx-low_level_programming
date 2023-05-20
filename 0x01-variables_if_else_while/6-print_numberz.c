#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a new line without using variables of type char.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
