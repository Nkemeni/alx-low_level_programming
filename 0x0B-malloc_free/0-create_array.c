#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it.
 * @size: size of the array
 * @c: the character that will used to initialize the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}

	return (NULL);
}






