#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_to_98 - entry point
  *
  * @n: integer to scan
  *
  * description - print all natural numbers
  */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		printf(" ,");
	}
	printf("\n");
}
