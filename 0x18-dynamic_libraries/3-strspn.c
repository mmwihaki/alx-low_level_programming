#include "main.h"
/**
  * _strspn - get the length of a prefix substring
  *
  * @s: string
  * @accept: input
  *
  * description - find the length of a prefix
  *
  * Return: number of bytes in s which consist of accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
