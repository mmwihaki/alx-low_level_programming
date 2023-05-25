#include "function_pointers.h"
/**
 * int_index - search for an int
 *
 * @size: number of elements in an array
 *
 * @cmp: pointer to a function
 *
 * @array: array
 *
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
