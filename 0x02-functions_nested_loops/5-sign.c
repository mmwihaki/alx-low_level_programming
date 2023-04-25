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
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar(0);
	}
}
