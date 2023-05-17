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
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
