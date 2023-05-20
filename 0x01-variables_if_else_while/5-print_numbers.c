#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
putchar(number);
}
putchar('\n');
return (0);
}
