#include "main.h"
/**
  * strpbrk: searches a string
  *
  * @s: input string
  *
  * @accept: bytes to check
  *
  * description - search a string
  *
  * Return: pointer to the byte in s
  */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
