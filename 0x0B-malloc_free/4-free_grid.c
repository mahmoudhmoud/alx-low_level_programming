#include "main.h"


/**
 * free_grid - free l grid
 * @grid: grid dyal dakira
 * @height:  int
 * Return:  void
 */


void free_grid(int **grid, int height)
{

	int i = 0;


	for (; i < height; i++)
		free(grid[i]);

	free(grid);

}
