#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * description - add positive numbers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	if (argc >= '0' && argc <= '9')
	{
		for (i = 1; i < argc; i++)
		{
			count += atoi(argv[i]);
		}

		printf("%d\n", count);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
