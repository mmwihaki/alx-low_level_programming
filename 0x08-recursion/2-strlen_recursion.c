#include "main.h"
/**
  * _strlen_recursion - length of string
  *
  * @s: input
  *
  * description - return length of string
  *
  * Return: Always 0
  */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
