#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
  * _islower - Entry point
  * @c: The character to scan
  * Description - check for lowercase character
  *
  * Return: Always 0 (success)
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
