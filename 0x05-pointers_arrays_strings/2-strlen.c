#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strlen - length of the string
  *
  * @s: string to check length
  *
  * description - return the length of a string
  *
  * Return: Always 0
  */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	return (c);
}
