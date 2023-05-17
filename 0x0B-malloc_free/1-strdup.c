#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *k;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	k = malloc(sizeof(char) * (i + 1));

	if (k == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		k[j] = str[j];
	return (k);
}
