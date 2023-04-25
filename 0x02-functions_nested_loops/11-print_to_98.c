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
	while (n <= 98 && n >= 98)
	{
		if (n <= 98)
		{
			printf("%d\n", n++);
		}
		else
		{
			printf("%d\n", n--);
		}
	}
}
