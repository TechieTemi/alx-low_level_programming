#include "main.h"

/**
 *_strncat - A function that concatenates two strings
 *Description: It is similar to the _strcat function, except
 *		it will at most n bytes from src and,
 *		src does not need to be null-terminated if,
 *		it contains n or more bytes
 *@dest: The first parameter which is a pointer to char
 *@src: The second parameter which is a pointer to char
 *@n: The third parameter which is an integer, which the size
 *Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
