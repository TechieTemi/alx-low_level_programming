#include "main.h"

/**
 *_memset - A function that fills memory with a constant byte
*Description: The function fills the first n bytes of the memory,
 *		area pointed to by s with the constant byte b
 *@s: The first parameter which is a pointer to s
 *@b: The second parameter which is of type char
 *@n: The third parameter which is an unsigned int
 *Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
