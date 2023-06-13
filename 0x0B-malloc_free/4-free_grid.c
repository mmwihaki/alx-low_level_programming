#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free array
 * @grid: grid
 * @height: height
 * description: free grid memeory
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
