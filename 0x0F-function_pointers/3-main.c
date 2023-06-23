#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: number or arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error \n");
		return (98);
	}

	i = atoi(argv[1]);
	func = get_op_func(argv[2]);
	j = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && j == 0)
	{
		printf("Error \n");
		return (100);
	}

	if (func == NULL)
	{
		printf("Error \n");
		return (99);
	}

	k = func(i, j);
	printf("%d\n", k);

	return (0);
}
