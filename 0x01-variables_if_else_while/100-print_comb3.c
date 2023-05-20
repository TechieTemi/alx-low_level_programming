#include <stdio.h>

/**
* main - Entry point of a program
*
* Description: Prints all possible differect combinations of two digits.
*		Numbers must be separated by ,.
*		Followed by space
*		The two digits must be different
*		Print only the smallest combination of two digits.
*
* Return 0;
*/

int main(void)
{
int ch1 = 48, ch2 = 49;
for (; ch1 <= 56; ch1++)
{
	for (; ch2 <= 57; ch2++)
	{
		if (ch1 == ch2)
		{
			continue;
		}
		else
		{
			putchar (ch1);
			putchar (ch2);
			if (ch1 != 56 || ch2 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}

	}
	ch2 = ch1 + 1;
}
putchar('\n');
return (0);
}
