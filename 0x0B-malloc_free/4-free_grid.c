#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free array
 * @grid: grid
 * @height: height
 * Description: frees grid memory
 * Return: nothing
 *
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
