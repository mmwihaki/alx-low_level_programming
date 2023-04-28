#include "main.h"
#include <stdio.h>

/**
  * more_numbers - entry point
  *
  * description -  prints 10 times the numbers, from 0 to 14
  *
  * Return: Always 0 (success)
  */
void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				putchar('1');
			putchar(n % 10 + '0');
		}
		putchar('\n');
	}
}
