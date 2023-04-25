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
	int n;

	for (n = 0; n <= 10; n++)
	{
		_putchar(n * 9);
	}
}
