#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strncat - concatenate a string
  *
  * @dest: destination string
  *
  * @src: source string
  *
  * @n: bytes from src
  *
  * Return: pointer to destination string
  */
char *_strncat(char *dest, char *src, int n)
{
	/*
	int len1, i;

	len1 = strlen(dest);

	while (dest[i++])
	{
		len1++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len1 + i] = src[i];
	}*/

	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
