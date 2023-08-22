#include <ctype.h>
#include "main.h"
#include <stdio.h>

/**
  * _isupper - Entry point
  * @c: The character to scan
  * Description - check for uppercase  character
  *
  * Return: Always 0 (success)
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}