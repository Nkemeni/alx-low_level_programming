#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the pointer to the first string
 * @s2: the pointer to the second string
 *
 * Return: 0 if s1 == s2 , -ve if s2 > s1 , +ve if s1 > s2 
 */
int _strcmp(char *s1, char *s2)
{
	unsigned char c1;
	unsigned char c2;

	do
	{
		c1 = (unsigned char)*s1++;
		c2 = (unsigned char)*s2++;
		if (c1 == '\0')
			return (c1 - c2);
	}
	while (c1 == c2);

	return (c1 - c2);
}



