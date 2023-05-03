#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * puts_half - print half of a string
  *
  * @str: string to split
  *
  * description - print second half of the string
  *
  * Return: Always 0
  */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1) /*uneven strlen*/
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else 
	{
		j = i / 2; /*even strlen*/
	}

	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
