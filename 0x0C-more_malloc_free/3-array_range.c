#include "main.h"
#include <stdlib.h>
/**
  * array_range - create an array of integers
  *
  * @min: minimum value
  *
  * @max: maximum value
  *
  * description - creates an array of integers
  *
  * Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int size = 0;
	int *array, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
