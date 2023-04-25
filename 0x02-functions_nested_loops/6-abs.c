#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
  * _abs(int) - entry point
  *
  * @int: character to scan
  *
  * description - compute the absolute value of an integer
  *
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
