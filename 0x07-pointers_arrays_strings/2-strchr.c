#include "main.h"

/**
 *_strchr - A function that locates a character in astring
 *Description: It returns a pointer to the first occurence of the,
 *		character c in the string s, or
 *		NULL if the character is not found
 *@s: The first parameter which is pointer to char
 *@c: The second parameter which is of type char
 *Return: A pointer to the first occurence of the character c,
 *		in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *f	= strchr(s, c);

	return (f);
}
