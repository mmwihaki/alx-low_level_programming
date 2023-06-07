#include "main.h"
/**
 * _strlen_recursion - check length of a string
 *
 * @s: input string
 *
 * description - return length of a string
 *
 * Return: ALways 0 (success)
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
