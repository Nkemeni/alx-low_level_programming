#include "main.h"

/**
 * string_toupper - changes all lower case letters in a string to upper case
 * @s: pointed to string which needs to undergo the conversion
 *
 * Return: the converted string
 */
char *string_toupper(char *s)
{
	for (; *s++ != '\0';)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
	}

	return (s);
}

