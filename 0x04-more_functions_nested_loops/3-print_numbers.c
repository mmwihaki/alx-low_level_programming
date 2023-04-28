#include "main.h"
#include <stdio.h>

/**
  * print_numbers - entry point
  *
  * description - prints the numbers, from 0 to 9
  *
  * Return: Always 0 (success)
  */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
