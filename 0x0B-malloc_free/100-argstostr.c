#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate arguments
 *
 * @ac: arguments number
 * @av: array of strings with arguments
 *
 * Return: pointer to the concatenated string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}

		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
