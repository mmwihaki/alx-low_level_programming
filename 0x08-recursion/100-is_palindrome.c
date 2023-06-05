#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome - check if string is palindrome
 * @s: string
 *
 * description - check if string is palindrome
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = strlen(s);
	int j = len - 1;

	if (len == 0 || len == 1)
		return (1);

	for (; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}

	return (1);
}
