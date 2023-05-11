#include "main.h"
/**
  * _puts_recursion - print a string
  *
  * @s: input
  *
  * description - prints a string followed by a new line
  *
  * Return: Always 0 (success)
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
