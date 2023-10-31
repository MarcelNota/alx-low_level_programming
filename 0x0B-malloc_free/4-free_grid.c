#include "main.h"

/**
 * free_grid - frees memory
 * @grid: array
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
