#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wordCount - count words in a string
 * @str: input string
 *
 * description - count number of words in a string
 *
 * Return: number of words
 */
int wordCount(char *str)
{
	int i, total = 0;
	int words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			words = 0;
		}
		else if (words == 0)
		{
			words = 1;
			total++;
		}
	}

	return (total);
}

/**
 * freeWords- free allocated memory for words
 * @word: array of words
 * @numWords: number of words
 * description - free allocated memory
 * Return: Void
 */
void freeWords(char **word, int numWords)
{
	int i;

	for (i = 0; i < numWords; i++)
	{
		free(word[i]);
	}
	free(word);
}

/**
 * strtow - split string into words
 * @str: string
 * description - split string into words
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, numWords;

	if (str == NULL || *str == '\0')
		return (NULL);

	numWords = wordCount(str);

	if (numWords == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (numWords + 1));

	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			len = 0;
			while (str[i + len] != ' ' && str[i + len] != '\0')
				len++;

			words[j] = malloc(sizeof(char) * (len + 1));

			if (words[j] == NULL)
			{
				freeWords(words, j);
				return (NULL);
			}

			for (k = 0;  k < len; k++)
				words[j][k] = str[i++];
			words[j][k] = '\0';
			j++;
		}
	}

	words[j] = NULL;

	return (words);
}
