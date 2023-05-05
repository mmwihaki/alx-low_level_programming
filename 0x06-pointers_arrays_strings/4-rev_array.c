#include "main.h"
/**
  * reverse_array - reverses the content of an array
  *
  * @a: array
  *
  * @n: number of elements of the array
  *
  * description - reverse contents of an array
  *
  * Return: Alwyas 0
  */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
