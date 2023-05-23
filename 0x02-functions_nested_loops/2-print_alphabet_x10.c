#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet_1;
	int alphabet = 0;

	while (alphabet <= 9)
	{
	for (alphabet_1 = 'a'; alphabet_1 <= 'z'; alphabet_1++)
	{
	_putchar (alphabet_1);
	}
	_putchar ('\n');
	alphabet++;
	}
}
