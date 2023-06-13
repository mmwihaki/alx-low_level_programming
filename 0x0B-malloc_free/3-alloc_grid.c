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

	if (width <= 0|| height <= 0)
		return (NULL);
