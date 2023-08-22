#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strcpy - copy string
  *
  * @dest: buffer pointer
  *
  * @src: string pointer
  *
  * description - copy string to buffer
  *
  * Return: the pointer to @dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	dest[i++] = '\0';
	return (dest);
}
