#include "main.h"
#include "stdio.h"

void print_alphabe_x10(void)
{
char alphabet = 'a';
int i = '0';
while (i <= '9')
{
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
alphabet = 'a';
i++;
putchar('\n');
}
}
