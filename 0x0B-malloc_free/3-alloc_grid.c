#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - creates a 2 dimmensional array of integers
 * @width: the number of columns in the matrix
 * @height: the number of rows in the matrix
 *
 * Return: NULL on failure, NULL if either h or w is zero or negative
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(width * sizeof(int));
			if (ptr[i] == NULL)
			{
				for (j = 0; j < width; j++)
					free(ptr[j]);
				free(ptr);
			}
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
		return (ptr);
	}

	return (NULL);

}


