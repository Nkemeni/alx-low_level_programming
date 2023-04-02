#include "main.h"

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
 * _strncat - appends n bytes fro the source string to the destination string
 * @src: the pointer to the source string
 * @dest: the pointer to the destination string
 * @n: the number of bytes to be appended
 *
 * Return: the pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_s;
	int len_d;
	int i;
	int j;

	len_s = _strlen(src);
	len_d = _strlen(dest);

	if (n > len_s)
	{
		for (i = len_d, j = 0; i < len_d + len_s && j < len_s; i++, j++)
		{
		dest[i] = src[j];
		}
	}
	else
	{
		for (i = len_d, j = 0; i < len_d + n && j < n; i++, j++)
		{
			dest[i] = src[j];
		}
	}
	dest[i] = '\0';

	return (dest);
}






