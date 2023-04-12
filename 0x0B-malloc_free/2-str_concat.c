#include "main.h"
#include <stdlib.h>

/**
 * _strlen - determines the length of s string
 * @s: the pointer to the string whose length is to be determine
 *
 * Return: the lenth of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: returned pointer should point to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *ptr;
	int i;
	int j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = malloc((len1 + len2) * sizeof(char) + 1);

	if (ptr != NULL)
	{
		for (i = len1, j = 0; i < len1 + len2 && j < len2; i++, j++)
			ptr[i]  = s2[j];
		for (i = 0; i < len1; i++)
			ptr[i] = s1[i];

		ptr[len1 + len2] = '\0';

		return (ptr);
	}

	return (NULL);
}



