#include "main.h"
/**
  * print_alphabet_x10 - Entry point
  *
  * Description - print the alphabet 10 times
  *
  * Return: Always 0 (success)
  */
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
