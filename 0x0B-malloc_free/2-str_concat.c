#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get end of an input and add together for size
 * @s1: input one
 * @s2: input two
 * description - concat string for size
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	c = malloc(sizeof(char) * (i + j + 1));

	if (c == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	i = 0, j = 0;
	while (s2[j] != '\0')
	{
		c[i] = s2[j];
		i++, j++;
	}

	c[i] = '\0';
	return (c);
}
