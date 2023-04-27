#include "main.h"
#include <stdio.h>

/**
  * _isdigit - main entry
  *
  * @c - character to scan
  *
  * description - checks for a digit
  *
  * Return: Always 0 (success)
  */
int _isdigit(int c);
{
	if (c >= 0 && c <=9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
