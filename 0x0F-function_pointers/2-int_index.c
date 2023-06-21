#include "function_pointers.h"
/**
 * int_index - search for int
 *
 * @size: number of elements in an array
 * @cmp: pointer to a function
 * @array: array
 * description - function that searches for an integer
 * Return: 0
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
		i++;
	}
	return (-1);
}
