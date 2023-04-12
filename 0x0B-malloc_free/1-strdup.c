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
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: pointer to string
 *
 * Return: NULL if str = NULL or On success
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		int len;
		int i;
		char *ptr;
		len = _strlen(str);
		ptr = malloc((len * sizeof(char)) + 1);

		if (ptr != NULL)
		{
			for (i = 0; i < len; i++)
			{
				*(ptr + i) = *(str + i);
			}
			*(ptr + len) = *(str + len);
		}
		return (ptr);
	}

	return (NULL);
}
