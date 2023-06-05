#include <stdio.h>
/**
 * print_diagsums - print sum fo two diagonals
 * @a:values of the elements of the matrix
 * @size: elements
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagsum1 = 0;
	int diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum1 += a[i * size +i];
		diagsum2 += a[i * size + size - i - 1];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
