#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Description: Assigns a random number to the variable n and prints whether
*              the number is positive, negative, or zero.
*
* Return: Always 0 (success)
*/

int main(void)
{
int n;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
