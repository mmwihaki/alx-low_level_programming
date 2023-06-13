#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop
 * @width: width
 * @height: height
 * description - function that returns a pointer
 * Return: pointer to a 2 dimention array
 */
int **alloc_grid(int width, int height)
{
	int **i;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	for (x = 0; x < height; x++)
	{
		i[x] = malloc(sizeof(int) * width);

		if (i[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(i[y]);

			free(i);
			return (NULL);
		}

		for (y = 0; y < width; y++)
			i[x][y] = 0;
	}

	return (i);
}
