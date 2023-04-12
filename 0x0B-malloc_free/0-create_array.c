#include "main.h"
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

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






