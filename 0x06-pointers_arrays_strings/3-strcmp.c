#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * _strcmp - compare string
  *
  * @s1: string to compare
  * @s2: string to compare
  *
  * description - compare strings
  *
  * Return: Always 0
  */
int _strcmp(char *s1, char *s2)
{
	int i, cmp;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		cmp = *s1 - *s2;
	}
	return (cmp);
}
