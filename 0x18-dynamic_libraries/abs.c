#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
  * _abs - entry point
  *
  * @n: character to scan
  *
  * description - compute the absolute value of an integer
  *
  * Return: Always 0 (success)
  */
int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}