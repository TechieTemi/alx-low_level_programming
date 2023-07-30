#include "main.h"

/**
 *_memcpy - A function that copies memory area
 *Description: The function copies n bytes from memory area src,
 *		to memory area dest
 *@dest: The first parameter which is a pointer to char
 *@src: The second parameter which is pointer to char
 *@n: The third parameter which is of type integer
 *Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
