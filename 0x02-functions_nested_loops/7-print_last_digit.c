#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_last_digit - entry point
  *
  *@n: character to scan
  *
  * Description - print the last digit of a number
  *
  * Return: Always 0 (success)
  */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(-i + 48);
	return (-i);
}
