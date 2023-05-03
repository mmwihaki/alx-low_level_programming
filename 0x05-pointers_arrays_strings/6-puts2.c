#include "main.h"
#include <stdio.h>
/**
  * puts2 - check the code
  *
  * @str: characters to print
  *
  * description - print evvery other character of a string
  *
  * Return: ALways 0
  */
void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
