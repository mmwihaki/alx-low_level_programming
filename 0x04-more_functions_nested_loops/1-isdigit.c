#include "main.h"

/**
  * _isdigit - main entry
  *
  * @c: character to scan
  *
  * desicription - checks for a digit
  *
  * Return: 0 or 1
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
