#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
  *_isalpha - entry point
  *@c: character to scan
  * description - check for alphabetic character
  *
  * Return: 0, 1
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n);
}
