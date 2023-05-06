#include "main.h"
#include <stdio.h>
/**
  * string_toupper - change lowercase to uppercase
  *
  * @'': string
  *
  * description - changes all lowercase letters of a string to uppercase
  *
  * Return: Always 0
  */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] =(int)str[i] - 32;
	}
	return (str);
}
