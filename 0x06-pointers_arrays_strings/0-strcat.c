#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strcat - concatenate string
  *
  * @dest: string 1
  *
  * @src: string 2
  *
  * description - concatenate a string
  *
  * Return: Always 0
  */
char *_strcat(char *dest, char *src)
{
	int i, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
