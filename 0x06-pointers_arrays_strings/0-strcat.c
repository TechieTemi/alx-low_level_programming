#include "main.h"

/**
 *_strcat - A function that concatenates two strings
 *Description: It appends the src string to the,
 *		dest string
 *@dest: The first parameter, pointer to char
 *@src: The second parameter, pointer to char
 *Return: A pointer to the first parameter
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
