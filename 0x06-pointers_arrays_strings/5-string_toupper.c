#include "main.h"

/**
 * string_toupper - changes all lower case letters in a string to upper case
 * @s: pointed to string which needs to undergo the conversion
 *
 * Return: the converted string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}

