#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - check code
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Description - add positive numbers
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i; 
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
