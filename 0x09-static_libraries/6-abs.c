#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
  * _abs - entry point
  *
  * @i: character to scan
  *
  * description - compute the absolute value of an integer
  *
  * Return: Always 0 (success)
  */
int _abs(int i)
{

	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
