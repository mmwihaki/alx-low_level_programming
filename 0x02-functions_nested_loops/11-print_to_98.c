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
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
	printf("%d\n", n);
	}
}
