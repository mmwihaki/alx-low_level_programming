#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - check code
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Description - multiply two numbers
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc <= 4)
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
