#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free
 * @grid: 2d
 * @height: heig grid
 */
void free_grid(int **grid, int height)
{
	int index;
       	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
