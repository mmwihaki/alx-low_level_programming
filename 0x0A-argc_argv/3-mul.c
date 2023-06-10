#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check teh code
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * description - multiply two numbers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc <= 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	else if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
