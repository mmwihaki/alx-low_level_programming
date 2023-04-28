#include "main.h"
#include <stdio.h>

/**
  * print_diagonal - entry point
  *
  * description - draws a diagonal line
  *
  * @n: character to scan
  *
  * Return: Always 0
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int m, k;

		for (m = 0; m < n; m++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == m)
					putchar('\\');
				else if (k < m)
					putchar(' ');
			}
		}
	}
}

