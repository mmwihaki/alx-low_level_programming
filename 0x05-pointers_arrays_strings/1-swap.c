#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap values
 *
 * @a: integer to swap
 * @b: integer to swap
 *
 * description - swap integers a and b
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
