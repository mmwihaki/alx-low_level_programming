#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strstr - find a substring in a string
*
* @haystack: string
*
* @needle: substring
*
* description - fin d needle in a haystack
*
* Return: Pointer to the begining of substring, NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int haystack_len = 0;
	int needle_len = 0;
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	haystack_len = strlen(haystack);
	needle_len = strlen(needle);

	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		j = 0;
		while (j < needle_len && haystack[i + j] == needle[j])
		{
			j++;
		}

		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
