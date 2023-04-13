#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimmensional grid space initially allocated
 * @grid: the pointer to the 2D grid
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
