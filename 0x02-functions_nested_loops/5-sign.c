#include "main.h"
#include <stdio.h>
/**
  * print_sign - entry point
  * @n: character to scan
  *
  * Description - print the sign of a number
  *
  * Return: 1, 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43,49);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
