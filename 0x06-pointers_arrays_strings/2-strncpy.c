#include "main.h"

/**
 *_strncpy - A function that copies a string
 *Description: The function should work exactly likestrncpy
 *@dest: The first parameter which is a pointer to char
 *@src: The second parameter which is a pointer to char
 *@n: The third parameter which is an integer to specify the size
 *Return: A pointer to dest, the first parameter
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
