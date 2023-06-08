#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_recursive - check if string is pailindrome recursively
 *
 * @s: string
 * @start: start
 * @end: end
 * description - check if string is aplindrome
 * Return: 1, 0
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - check if string is palindrome
 * @s: string
 *
 * description - check if s is palindrome
 * Return: 1, 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
