#include "main.h"
#include <stdio.h>
/**
  * print_triangle - entry point
  * @size: size of triangle
  *
  * Return: Always 0
  */
void print_triangle(int size)
{
	if (size <= 10)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)

			{
				putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
