#include "main.h"
#include <stdio.h>

/**
  * print_line - entry point
  *
  *@n: character to scan
  *
  * description - draws a straight line in the terminal
  *
  * Return: Always 0
  */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
