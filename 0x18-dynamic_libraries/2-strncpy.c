#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strncpy - copy a string
  *
  * @dest: destination string
  * @src: source string
  * @n: input value
  *
  * description - copy a string
  *
  * Return: Always 0 (success)
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}