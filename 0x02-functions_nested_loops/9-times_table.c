#include "main.h"
#include <stdio.h>

/**
  * times_table - Entry point
  *
  * description - prints the 9 times table
  *
  * Return: Always 0 (success)
  */
void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			printf("%d, \t", i * j);
			j++;
		}
		printf("\n");
		i++;
	}
}
