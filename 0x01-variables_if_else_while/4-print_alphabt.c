#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, excluding 'q' and 'e',
 *              using the putchar function.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letter_lower;
for (letter_lower = 'a'; letter_lower <= 'z'; letter_lower++)
{
if (letter_lower != 'q' && letter_lower != 'e')
{
putchar(letter_lower);
}
}
putchar('\n');
return (0);
}
